//============================================================================
// Name        : charArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char text[] = {'h','e','l','l','o'};
	char text1[] = "hello";
	for (int i = 0; i < sizeof(text); i++) {
			cout << text[i]<< endl;
	}
    cout << "----------" << endl;
	for (int i = 0; i < sizeof(text1); i++) {
				cout<< i <<": "<< text1[i] << " "<<(int)text1[i]<< endl;
	}
	cout << "----------"<< endl;
	int k = 0;
	while(true) {
		if (text[k]==0)
			break;

		cout << text[k] << flush;
		k++;

	}
	return 0;
}
