#pragma once

using namespace std;
struct Time {
	int HH;
	int MM;
	int SS;
};

bool is_valid(Time time);
std::string toString(Time time);
Time& operator+(Time& time , int a);
Time& operator-(Time& time, int a);
Time& operator++(Time& time,int noll);
Time& operator--(Time& time);
istream& operator>>(istream& is,  Time &time);
ostream& operator<<(ostream& os, Time& time);


