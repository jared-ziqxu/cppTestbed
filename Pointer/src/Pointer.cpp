//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Pointer and Array
//============================================================================

#include <iostream>
using namespace std;

void manpoint(double value) {
	cout << "2. value of double: " << value << endl;
    value = 10.0;
    cout << "3. value of double: " << value << endl;
}

void manpoint2(double* value) {
	cout << "2. value of double: " << *value << endl;
    *value = 10.0;
    cout << "3. value of double: " << *value << endl;
}

int main() {
	int nValue=8;
	int* pnValue = &nValue;
	cout << "pnValue: " << pnValue << endl << "*pnValue " << *pnValue << endl;

	double dValue = 123.4;
	cout << "1. dValue is:" << dValue << endl;
	manpoint2(&dValue);
	cout << "4. dValue is:" << dValue << endl;

	string texts[] = {"one","two","three"};
	cout << sizeof(texts)/sizeof(string) << endl;
    string* pTexts = texts;

	for(int i=0; i< sizeof(texts)/sizeof(string);i++) {
		cout << texts[i] << " " << flush;
	}

	for(int i=0; i< sizeof(texts)/sizeof(string);i++) {
			cout << *pTexts << " " << flush;
			pTexts++;
	}

	string *pElement = texts;
	cout << endl << "*pElement:" <<*pElement;
	string *pEnd = &texts[2];
    cout << endl << "*pEnd:" << *pEnd;

    while(true) {
    	cout << endl << "*pElement:" <<*pElement;
    	if (pElement == pEnd) {
    		break;
    	}
    	pElement++;
    }

    cout << endl <<"----------------------" << endl;
    const int SIZE = 5;
    string texts2[SIZE] = {"one","two","three","four","five"};
    string* pText2 = texts2;
    pText2 += 3;
    //cout << *pText2<< endl;
    pText2 -= 3;
    //cout << *pText2<< endl;
    string* pEnd2 = &texts2[SIZE];
    cout << "*pEnd2 " << *pEnd2 << endl;
    pText2 = &texts2[0];
    cout << "*pText2 " <<*pText2<< endl;
    while(pText2 != pEnd2) {
    	cout << "while: " <<*pText2 << endl;
        pText2++;
    }
    //cout << "*pText2 again:" <<*pText2<< endl;
    pText2 = &texts2[0];
    long elements = (long)(pEnd2 - pText2);
    cout << sizeof(string) << endl;
    cout << pText2 << endl;
    cout << pEnd2 << endl;
    cout << elements;
	return 0;
}
