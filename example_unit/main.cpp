#include<iostream>
#include"../module_1/person.h"
using namespace std;

int main()
{
	Person p = {"Oleg",35,Person::MALE};

	cout << p.GetName() << endl;

}