//============================================================================
// Name        : Getter_and_Setter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person person;
	cout << person.toString() << endl;
	person.setName("John");
	cout << person.toString() << endl;
	cout << person.getName() << endl;
	return 0;
}
