#pragma once


struct Time {
	int HH;
	int MM;
	int SS;
};

bool is_valid(Time time);
bool is_am(Time time); //const& ?
std::string toString(Time const& time);
Time operator+(Time time , int a);
Time operator-(Time time, int a);
Time operator++(Time time,int);
Time& operator++(Time &time);
bool operator==(Time const& time1, Time const& time2);
bool operator!=(Time const& time1, Time const& time2);
Time operator--(Time time, int);
Time& operator--(Time& time);
bool operator<(Time const& time1, Time const& time2);
bool operator>(Time const& time1, Time const& time2);
std::istream& operator>>(std::istream& is, Time& time);
std::ostream& operator<<(std::ostream& os, Time const& time);