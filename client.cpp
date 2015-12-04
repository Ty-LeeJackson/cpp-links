#include <iostream>
#include <string>
#include <cassert>
#include "Datelist.h"

using namespace std;


int main()
{

	DateList *obj = new DateList("SLC Dating service");
	assert(obj);

	cout << obj->getDatingServiceName() << endl;

	/*
	obj->name = "Mike";
	obj->age = 33;
	obj->gender = 'M';
	*/
	obj->addDate("john",55,'M');
	obj->addDate("john", 55, 'M');
	obj->addDate("john", 55, 'M');
	obj->showDate(cout);




	delete obj;
	system("pause");
}
