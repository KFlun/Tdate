#include<iostream>
using namespace std;
#include"БъЭЗ.h"

void Tdate::Print()
{
	cout << month << "/" << day << "/" << year << "  ";
	time.print();
}

Tdate::Tdate()
{
	month = 2;
	day = 5;
	year = 2000;
}

void Tdate::Set(int month, int day, int year, int sec, int min, int hour)
{
	this->month = month;
	this->day = day;
	this->year = year;
	time.Set(sec,min,hour);
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

void Time::Set(int sec, int min, int hour)
{
	this->sec = sec;
	this->min = min;
	this->hour = hour;
}