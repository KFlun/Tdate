#include<iostream>
using namespace std;
#include"head.h"


int main()
{
	Tdate ntd;
	ntd.print();
	Tdate gtd(1968, 9, 17, 1, 1, 54);
	gtd.print();
	Time time(5, 2, 0);
	Tdate copytime(1869, 9, 14, time);
	copytime.print();
	system("pause");
	return 0;
}