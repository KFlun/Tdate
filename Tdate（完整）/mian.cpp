#include<iostream>
using namespace std;
#include"标头.h"


int main()
{
	int y, m, d, s, f, h;
	Tdate td;
	td.Print();
	td.Set(12,5,1685,02,36,19);
	td.Print();
	system("pause");
	return 0;
}
