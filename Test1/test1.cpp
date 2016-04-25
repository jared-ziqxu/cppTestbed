/*
 * test1.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: ziqxu
 */

#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {

	int myVar = 5;
	cout << myVar << endl;
	string text1 = "Hello,";
	string text2 = "Fred!";
	string text3 = text1 + text2;
	cout << text3 << " is text3" << endl;

//	cout << "Your name is" << flush;
//	string name;
//	cin >> name;
//	cout << "You entered:" << name << endl;
//
//	cout << "Your age is" << flush;
//	int age;
//	cin >> age;
//	cout << "You Age is:" << age << endl;

	int value = 35536;
	cout << "max int value: " << INT_MAX << endl;
	cout << "min int value: " << INT_MIN << endl;
	cout << "max long value: " << LONG_MAX << endl;
	cout << "min long value: " << LONG_MIN << endl;
	cout << "max unsigned int value: " << UINT_MAX << endl;
	//cout << "min unsigned int value: " << UINT_MIN << endl;
	cout << "max short value: " << SHRT_MAX << endl;
	//cout << "min short value: " << SHRT_MIN << endl;
	cout << value * value << endl;

	unsigned int uValue = 23333;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of long: " << sizeof(long) << endl;
	cout << "size of short: " << sizeof(short) << endl;
	cout << "size of unsigned: " << sizeof(unsigned) << endl;

	float fv = 700.4;
	cout << fv << endl;
	cout << fixed << fv << endl;
	cout << setprecision(2) << fixed << fv << endl;
	cout << scientific << fv << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;

	long double lvalue = 123.435435345345;
	cout << setprecision(20) << fixed << lvalue << endl;
	cout << "size of long double: " << sizeof(lvalue) << endl;


	bool bV = true;
	cout << "bV: " << bV << endl;

	char cV = 55;
    cout << "cV: " << cV << endl; // output is 7
	char cV2 = '7';
	cout << (int)cV2 << endl; // output is 55
    wchar_t wValue = 'i';
    cout << wValue << endl << (char)wValue << endl << sizeof(wchar_t) << endl;

    float vf = 1.1;
    cout << fixed << setprecision(10) << vf << endl;
    if (vf == 1.1) {
    	cout << "Equal" << endl;
    } else {
    	cout << "Not Equal" << endl; // not equal
    }

    int values[] = {4, 7, 3, 4};
    for (unsigned int i=0;i< sizeof(values)/sizeof(int);i++) {

    	cout << values[i] << " " << flush;

    }
    cout << endl<< sizeof(values) << endl;

    int arr[5];
    cout<< sizeof(arr) << endl;

    string animals[][3] = {
    		{"fox","dog","cat"},
    		{"mouse","squirrel","parrot"}
    };
    cout << "sizeof animals:"<< sizeof(animals[0]) << sizeof(string)<<endl;
	return 0;

}
