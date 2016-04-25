/*
 * Cat.cpp
 *
 *  Created on: Jan 4, 2016
 *      Author: ziqxu
 */
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created." << endl;
    happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed" << endl;
}

void Cat::speak() {
	if (happy) {
		cout << "Meouw!" << endl;
		} else {
		cout << "Zzzzz!" << endl;
		}
}
