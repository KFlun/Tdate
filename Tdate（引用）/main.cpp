#include<iostream>
using namespace std;
#include"БъЭЗ.h";

void fun(Tdate &a)
{
	if (a.IsLeapyear())
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	Tdate t;
	Tdate x;

	t.Set(2, 6, 200);
	x.Set(3, 9, 1998);

	t.Print();
	cout << endl;
	fun(t);
	cout << endl << endl;

	x.Print();
	cout << endl;
	fun(x);
	cout << endl << endl;

	system("pause");
	return 0;
}