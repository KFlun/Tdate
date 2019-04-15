#include<iostream>
using namespace std;
#include"标头.h";

void Tdate::Set(int month, int day, int year)
{
	this->month = month;//this 用“.”行不行.回答：不得行，this本身就是一个指针
	this->day = day;
	this->year = year;
}

int Tdate::IsLeapyear()
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void  Tdate::Print()
{
	cout << month << "/" << day << "/" << year;
}