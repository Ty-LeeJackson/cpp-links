#include <iostream>
#include <string>
#include <cassert>
#include "Datelist.h"

using namespace std;

DateList::DateList(string newDatingServiceName)
{
	datingServiceName = newDatingServiceName;
	numberOfDates = 0;
	firstptr = NULL;
}

void DateList::showDate(ostream& out)
{
	Date *walker = firstptr;
	while (walker != NULL)
	{
		out << walker->name << walker->gender << walker->age;
		walker = walker->link;
		//numberOfDates++;

	}	
	cout << "number of possible dates = " << numberOfDates << endl;
}

string DateList::getDatingServiceName()
{
	return datingServiceName;
}

void DateList::addDate(string newName, int newAge, char newGender)
{
	
	Date *walker = firstptr;
	Date *stalker = NULL;
	Date *builder = new Date();

	builder->name = newName;
	builder -> age = -newAge;
	builder->gender = newGender;
	builder -> link = NULL;

	if (firstptr)
	{
		while (walker != NULL)
		{
			
			stalker = walker;
			walker = walker->link;
			
		}
		stalker->link = builder;
	}
	else{
		firstptr = builder;
		}

	numberOfDates++;
}
