#include<iostream>
using namespace std;
#include"��ͷ.h";

void Tdate::Set(int month, int day, int year)
{
	this->month = month;//this �á�.���в���.�ش𣺲����У�this�������һ��ָ��
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