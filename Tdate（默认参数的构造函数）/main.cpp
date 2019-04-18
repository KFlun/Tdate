#include<iostream>
using namespace std;
#include"head.h"


int main()
{
	Tdate gtd(1968, 9, 17, 36, 56, 98);
	gtd.print();
	Tdate dtd(2015);
	dtd.print();

	system("pause");
	return 0;
}