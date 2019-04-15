#pragma once
#include<iostream>
class Tdate
{
public:
	void Set(int m, int d, int y);
	int IsLeapyear();
	void Print();
private:
	int month;
	int year;
	int day;
};