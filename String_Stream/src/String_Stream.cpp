//============================================================================
// Name        : String_Stream.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string name = "bob";
    int age = 32;
    stringstream ss;
    ss << "Name:";
    ss << name;
    ss << " Age:";
    ss << age;
    string info = ss.str();

    cout << info << endl;
	return 0;
}
