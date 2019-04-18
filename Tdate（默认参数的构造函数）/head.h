#pragma once
#include<iostream>
using namespace std;

class Time
{
public:
	Time();
	Time(int sec, int min, int hour);
	void print();
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
	Tdate(int year = 1970, int month = 1, int day = 1, int sec = 0, int min = 0, int hour = 0);
	void print();
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
