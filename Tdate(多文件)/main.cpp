#include<iostream>
using namespace std;
#include"БъЭЗ.h";

void fun(Tdate a)
{
	if (a.IsLeapyear())
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	Tdate t;
	t.Set(2, 6, 200);
	t.Print();
	cout << endl;
	fun(t);
	cout << endl;
	system("pause");
	return 0;
}