#include<iostream>
using namespace std;
#include"标头.h"

void Tdate::print()
{
	cout << month << "/" << day << "/" << year << "  ";
	time.print();
}

Tdate::Tdate()
{
	month = 5;
	day = 2;
	year = 2000;
}

//Tdate::Tdate(int year, int month, int day, int sec, int min, int hour)
//{
//	this->year = year;
//	this->month = month;
//	this->day = day;
//	Time a(sec, min, hour);        //在进入Tdate时就已经默认调用了Time的无参构造函数，所以建立一个新的临时变量
//	time = a;                      //将Tdate的Time类型成员变量赋值为a
//}                                //该函数结束后，变量a调用析构函数销毁，输出“run”

Tdate::Tdate(int year, int month, int day, int sec, int min, int hour) :time(sec, min, hour)    //可以对多个参数进行赋值  ,year(year)不会冲突吗？？
{
	this->year = year;
	this->month = month;
	this->day = day;
	Time time(sec, min, hour);
}

Time::Time()
{
	hour = 00;
	min = 00;
	sec = 00;
}

void Time::print()
{
	cout << hour << ":" << min << ":" << sec << endl;
}

Time::Time(int sec, int min, int hour)
{
	this->sec = sec;
	this->min = min;
	this->hour = hour;
}
