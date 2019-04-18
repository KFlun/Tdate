#include<iostream>
using namespace std;
#include"head.h"

void Tdate::print()
{
	cout << month << "/" << day << "/" << year << "  ";
	time.print();
}

Tdate::Tdate(int year, int month, int day, int sec, int min, int hour)
{
	this->year = year;
	this->month = month;
	this->day = day;
	Time a(sec, min, hour);
	time = a;
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
