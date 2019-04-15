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