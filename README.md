# Tdate
说明：这一系列项目是关于类的学习中对时间设置这个程序一次次的摸索和改进
*********************************
## _Tdate_：
### 概述：
最初始的Tdate程序，目的是输入一个年份，判断该年份是否是闰年。
### 写法:
类的初始运用，创建了一个Tdate类，并在类中添加了成员变量，成员函数。通过成员函数Set方法来对年份进行设置。
### 收获：  
1、怎样构造一个类  
2、类的大小与成员函数无关，由成员变量决定。例如下面的Tdate类：
```
class Tdate
{
 ……………………略
private:
	Time time;
	int month;
	int year;
	int day;
};
```
Tdate的大小 &emsp; = &emsp; 3*4+Time类的大小  
3、成员函数的调用  
4、闰年的计算方法  
5、权限访问限制符的使用  
6、关于成员函数，一般不在对象的定义中直接定义成员函数，如果一定要直接定义成员函数，则一般为内联函数（短小）。
***********************
## _Tdate（多文件）_：
### 概述：
在 _Tdate_ 上进行修改，采用了分文件的方式。
### 写法：
构建了三个文件：main.cpp,source.cpp,标头.h。分别包含主函数、函数定义、函数声明。
### 收获：
1、多文件结构的写法，不同文件之间的相互访问，对头文件的包含方式。  
2、在对象的外部对该对象的成员函数进行定义的时候一定要加域作用符。并且说明属于那个对象。（有名有姓）  
 **如下代码格式：**  
 Tdate为类名，set为函数名，”：：“为域作用符  
```
void Tdate::Set(int month, int day, int year, int sec, int min, int hour)  
{  
    this->month = month;  
    this->day = day;  
    this->year = year;  
    time.Set(sec,min,hour);  
}
```
3、this指针的使用，一般在构造函数中使用，避免了形参与实参混淆造成的语义不明。  
4、一个优秀的程序员一定要学会如何构造自己程序的文件结构，好的文件结构可读性强，逻辑清晰，运行流畅，并且能够满足更多的功能需求。对于大型程序来说，清晰
的文件结构让后期的维护工作变得容易。最重要的是，清晰的文件结构 __很美！__ 。  对于C++程序来说，初级（标准）的文件结构为：头文件（1），cpp文件（2）。
头文件中包含类的定义和函数声明。一个cpp文件用来进行函数定义，另一个存放主函数，是程序的主要逻辑部分。  
***********************
## _Tdate(指针调用)_
### 概述：
在 _Tdate（多文件）_ 上进一步修改，创建类类型的指针变量。
### 写法：
创建了一个Tdate类型的指针，并用指针进行成员函数的调用。
### 收获：
1、用指针进行成员函数调用时要用->来代替”.“符号。  
2、类类型指针在传参时也要传地址，用法和int、double等类型指针一致。  
********************
## _Tdate(引用)_
### 概述:
在 _Tdate（多文件）_ 上进行修改，用引用的方式进行函数调用，传参等。
### 写法：
引用，给对象一个别名。
### 收获：
调用函数也是用”.“，是个对象的别名，但是地址不一样。 _没什么特别的_ 
*******************************
## _Tdate（完整）_
### 概述：
在 _Tdate(多文件)_ 的基础上，增加了一个Time类，用来设置每天的具体时间。
### 写法：
1、在 *Tdate* 中添加了一个Time类型的成员变量，仍然采用set函数的方式进行日期和时间的设定。  
2、添加了类的构造函数。  
3、在类中对另一个类的方法进行调用。
### 收获：
1、构造函数的使用。  
2、在实例化对象时一定先给成员变量分配内存空间，在成员变量中如果有类类型的变量则要优先执行该变量的构造函数。  
3、在一个类中对另一个类成员函数的调用方法没有变化。
*******************
## *Tdate（完整 构造）*
### 概述:
在 *Tdate（完整）* 上进行的改进。不再用Set函数进行日期的设定。
### 写法;
1、使用含参构造函数对构造函数进行重载。直接使用含参构造函数进行对象实例化。  
2、定义一个析构函数的表达。（析构函数无论是否定义都会在销毁一个对象实例的时候进行，只是平时看不到而已。类似于构造函数。）  
定义析构函数：（我们在这个项目中采用输出”run“字样的方式来观察析构函数的执行情况,Tdate同理）  
```
~Time()
	{
		cout << "run" << endl;
	}
```
### 收获：
1、逐语句调试程序时，析构函数和构造函数的调用是跳至定义语句行，其他函数的调用时跳至函数开始的“{}”符号处。
2、在对含参构造函数进行重载的时候，实际上是默认进入了Time类型变量time的无参构造函数的。  
调用含参构造函数  
```
Tdate gtd(1968,9,17, 36, 56, 98);
```
进入Tdate对象中，对变量time进行初始化：  
```
class Tdate
{
……………………（略）
private:
	Time time;
	int month;
	int year;
	int day;
};
```
进入对象Time，调用默认的构造函数：  
```
class Time
{
public:
	Time();
	Time(int sec, int min, int hour);
……………………（略）
};
```
回到Tdate中，进入含参的构造函数：  
```
Tdate::Tdate(int year, int month, int day, int sec, int min, int hour)
{
	this->year = year;
	this->month = month;
	this->day = day;
	Time a(sec, min, hour);//在进入Tdate时就已经默认调用了Time的无参构造函数，所以建立一个新的临时变量
	time = a;//将Tdate的Time类型成员变量赋值为a
}//该函数结束后，变量a调用析构函数销毁，输出“run”

//如果直接调用含参构造函数则会因为无法访问变量导致赋值失败，time依然为无参构造函数的值。
```
上述创建临时变量a方式为暂行手段，能够达到目的但是不专业。  
**更专业的方式为：使用冒号语法（初始值列表）**  
1、冒号语法：冒号表示后面要对数据成员进行初始化，如果是基本数据成员则使用括号内的实参进行赋初始值；如果是类数据成员则使用括号中的实参作为构造函数的形参嗲用。例如对上述代码进行改进：
```
class Tdate
{
public:
	Tdate(int year, int month, int day, int sec, int min, int hour);
	 ………………略
private:
	Time time;
	int month;
	int year;
	int day;
};

Time::Time(int sec, int min, int hour)
{
	this->sec = sec;
	this->min = min;
	this->hour = hour;
}

Tdate::Tdate(int year, int month, int day, int sec, int min, int hour) :time(sec, min, hour)    //可以对多个参数进行赋值
{
	this->year = year;
	this->month = month;
	this->day = day;
	Time time(sec, min, hour);
}
```
冒号语法（初始值列表）：
（1）冒号语法可为常量（const）和引用进行初始化，也可以为基本数据成员初始化。例如在上述例子中，Tdate的构造函数可以改成：
```
Tdate::Tdate(int year, int month, int day, int sec, int min, int hour) :time(sec, min, hour)，year(year),month(month),day(day)
{
	Time time(sec, min, hour);
}
//用冒号语法对基本数据变量进行初始化时，括号内为实参，外部名称为形参，这样使用的话，还是会在调用Tdate的构造函数后创建一个Time类型的局部变量
```
这样也是正确的：
```
Tdate::Tdate(int year, int month, int day, int sec, int min, int hour) :time(sec, min, hour)，year(year),month(month),day(day){};
//这样则根本不会有Time类型的局部变量生成。
```
（2）在冒号语法的运用中注意与成员变量初始化的顺序进行匹配
```
class Tdate
{
 …………………………略
private:
	Time time;
	int month;
	int year;
	int day;
};

//error  Tdate::Tdate(int year, int month, int day, int sec, int min, int hour) :time(sec, min, hour),day(3),month(3*day){}; 
//right  Tdate::Tdate(int year, int month, int day, int sec, int min, int hour) :time(sec, min, hour),month(3),day(3*month){}; 
```

2、关于不用Set函数的解释：  
&emsp;&emsp;这个方式太蠢了，而且一点都不专业，在对类进行初始化的时候都是直接使用构造函数的方式，Set函数的存在一般都是当我们想修改局部的属性的时候才调用。
*********************************
# _Tdate（默认参数的构造函数）_
### 概述：
在 *Tdate（完整 构造）* 的基础上定义了含默认参数的构造函数
### 写法：
对定义的构造函数添加默认参数。
### 收获：
1、默认参数在函数声明中提供，当又有声明又有定义时，定义中不允许默认参数。例如在当前项目中：
```
class Tdate
{
public:
	Tdate(int year = 1970, int month = 1, int day = 1, int sec = 0, int min = 0, int hour = 0);
	 …………………………略
};
Tdate::Tdate(int year, int month, int day, int sec, int min, int hour)
{
	 ……………………略
}
```
2、含默认参数的构造函数本身具有默认构造函数的性质，所以不能再定义一个无参构造函数。同样不能有相同参数的其他重载函数。例如在当前项目中：  
当存在如下含参构造函数后
```
class Tdate
{
public:
	Tdate(int year = 1970, int month = 1, int day = 1, int sec = 0, int min = 0, int hour = 0);
	 …………………………略
};
```
不能同时存在如下构造函数:
```
class Tdate
{
public:
	Tdate();
	Tdate(int year, int month, int day, int sec, int min, int hour);//加参！！！！！
	 …………………………略
};
```
否则在调用时会产生调用不明（编译器不知道匹配哪一个函数）的情况。
 
静态局部对象只被构造一次
不同文件中的对象不知道谁先构造，相同文件中是按顺序构造的

