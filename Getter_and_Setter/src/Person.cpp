/*
 * Person.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: ziqxu
 */

#include "Person.h"

Person::Person() {
	name = "George";
}

string Person::toString(){
	return "Person's name is: " + name;
}

void Person::setName(string newName) {

	name = newName;

}

string Person::getName() {

	return name;

}
