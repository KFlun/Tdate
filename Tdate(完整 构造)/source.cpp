#include<iostream>
using namespace std;
#include"��ͷ.h"

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
//	Time a(sec, min, hour);        //�ڽ���Tdateʱ���Ѿ�Ĭ�ϵ�����Time���޲ι��캯�������Խ���һ���µ���ʱ����
//	time = a;                      //��Tdate��Time���ͳ�Ա������ֵΪa
//}                                //�ú��������󣬱���a���������������٣������run��

Tdate::Tdate(int year, int month, int day, int sec, int min, int hour) :time(sec, min, hour), year(year), month(month), day(day)  //���ԶԶ���������и�ֵ 
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
