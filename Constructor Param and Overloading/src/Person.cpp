/*
 * Person.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: ziqxu
 */

#include <sstream>
#include "Person.h"

Person::Person() {
	name = "undefined";
    age = 0;
}

Person::Person(string name, int age) {
	name = name;
	age = age;
}

string Person::toString() {
    stringstream ss;
    ss << "name:";
    ss << name;
    ss << " age:";
    ss << age << endl;
    return ss.str();
}
