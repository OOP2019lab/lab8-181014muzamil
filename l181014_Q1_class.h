#include<iostream>
#include<string>
using namespace std;

class Date
{
int date;
int month;
int year;
public:
	Date(int month,int date,int year);
	Date();
	friend ostream & operator<<(ostream & out,const Date & mydate);
    bool operator==(const Date & mydate);
	friend istream & operator>>(istream & inobj,Date & mydate);
	void operator+(int);
	const Date & operator=(const Date & mydate);
	Date & operator--(int);
	Date & operator--();
	int & operator[](int);
};