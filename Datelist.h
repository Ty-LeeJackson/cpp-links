#include <iostream>
#include <string>
using namespace std;



struct Date
{
	string name;
	int age;
	char gender;
	Date *link;

};


class DateList : public Date
{


public:
	DateList(string /*name of club*/);
	void showDate(ostream& /*output*/);
	void addDate(string/**/,int/**/,char/**/);
	void removeDate(string /*name*/);
	int getNoDates();
	string getDatingServiceName();

private:
	Date *firstptr;
	string datingServiceName;
	int numberOfDates;
};
