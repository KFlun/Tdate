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
/*��main������ʵ����������Tdate��������Ҫ�������Σ�
��ÿ��Tdate����������һ��timeʵ��������һ�����ĸ��౻���٣������Ĵ���������*/