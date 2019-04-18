#include<iostream>
using namespace std;
#include"head.h"


int main()
{
	Tdate ntd;
	ntd.print();
	Tdate gtd(1968,9,17, 1, 1, 54);
	gtd.print();
	
	system("pause");
	return 0;
}
/*在main函数中实例化了两个Tdate对象，所以要销毁两次，
而每个Tdate对象中又有一个time实例，所以一共是四个类被销毁，调用四次析构函数*/