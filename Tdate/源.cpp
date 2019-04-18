#include<iostream>
using namespace std;

class Tdate 
{
public:
	void Set(int m,int d,int y)
	{
		month = m;
		day = d;
		year = y;
	}

	int IsLeapyear()
	{
		return (year % 4 == 0 && year % 100!=0) || (year % 400==0);
	}

	void Print()
	{
		cout << month << "," << day << "," << year;
	}
private:
	int month;
	int year;
	int day;
};

int main()
{
	Tdate t;
	t.Set(2,6,200);
	t.Print();
	cout << endl;
	cout << t.IsLeapyear() << endl;
	system("pause");
	return 0;
}



//大小与成员函数没有关系，由成员变量决定
//如果没有给出构造函数，那么会调用默认的构造函数 demonname（）{}；

//共享成员函数（重复性较高的时候）
//关于含默认参数值的构造函数，有个顺序问题（P96）