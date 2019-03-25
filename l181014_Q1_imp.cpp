#include"Date.h";

Date::Date()
{
	month=1;
    year=2000;
    date=1;
}

Date::Date(int m,int d,int y)
{
	if(m>0 && m<13)
		month=m; 

	if(d>0 && d<31)
		date=d; 
	if(y>=1000 && y<=9999)
		year=y;

	else if((m>12) || (d<0 || d>30) || (y<1000 || y>9999))
	  {
     	  month=1;
	      date=1;	 
	      year=2000;
	   }
}



ostream & operator<<(ostream & out,const Date & mydate)
{
static string monthNames[13] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int m=mydate.month;
    out<<monthNames[m];

	out<<mydate.date;
	out<<","<<mydate.year<<endl;
    return out;
}
 
bool Date::operator==(const Date & mydate)
{
	if(mydate.month==month && mydate.year==year && mydate.date==date)
		return true;
	else 
		return false;
}

istream& operator>>(istream& inobj,Date & mydate)
{
	cout<<"Enter Month,Date & Year"<<endl;
	inobj >> mydate.month;
	inobj >> mydate.date;
	inobj >> mydate.year;
	return inobj;
}

void Date::operator+(int i)
{
    date=date+i;	
}

const Date & Date::operator=(const Date & mydate)
{
	date=mydate.date;
	month=mydate.month;
	year=mydate.year;
	return *this;
}

Date & Date::operator--(int u)
{
	Date *b=new Date();
	b->date=this->date;
	b->month=this->month;
	b->year=this->year;
	--(this->date);
	return *b;
}

Date & Date::operator--()
{
	this->date=this->date-1;
	return * this;
}

int & Date::operator[](int c)
{
	if(c!=0 || c!=1 || c!=2)
	{
		cout<<"Incorrect Input"<<endl;
	}
	else
	{
	if(c==0)
		return date;
	if(c==1)
		return month;
	if(c==2)
       return year;
	}
	
}