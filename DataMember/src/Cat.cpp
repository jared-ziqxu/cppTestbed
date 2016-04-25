/*
 * Cat.cpp
 *
 *  Created on: Jan 4, 2016
 *      Author: ziqxu
 */
#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {
	if (happy) {
	cout << "Meouw!" << endl;
	} else {
	cout << "Zzzzz!" << endl;
	}

}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}
