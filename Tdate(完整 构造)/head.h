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
	Tdate();
	Tdate(int year, int month, int day, int sec, int min, int hour);
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
