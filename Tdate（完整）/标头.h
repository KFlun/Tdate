#pragma once
#include<iostream>
using namespace std;

class Time
{
public:
	Time();
	void print();
	void Set(int sec, int min, int hour);
	~Time()
	{
		cout << "run" << endl;
	}
private:
	int hour;
	int min;
	int sec;
};

class Tdate
{
public:
	Tdate();
	void Print();
	void Set(int month, int day, int year, int sec, int min, int hour);
	~Tdate()
	{
		cout << "run" << endl;
	}
private:
	Time time;
	int month;
	int year;
	int day;
};
