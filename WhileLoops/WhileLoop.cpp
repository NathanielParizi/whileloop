/*
 * WhileLoop.cpp
 *
 *  Created on: Jul 8, 2018
 *      Author: Nathaniel Parizi
 */

#include <iostream>
using namespace std;

int main() {

	int i = 0;

	//while loop C++
	while (i <= 5) {
		cout << "Hello" << flush;
		i = i + 1;
		cout << i << endl;
	}

	int q = 0;

	//do while loop C++
	do {
		cout << "q: " << q << endl;
		q++;
		if (q == 6) {
			cout << "Loop Complete" << endl;
		}
	} while (q <= 5);
	cout << "Program terminated" << endl;
	i = 50;
	if (i == 50) {
		cout << "i is 50" << endl;
	}

	string password;

	cout << "Enter the password" << endl;
	cin >> password;
	do {

		cout << password << "?" << endl;
		if (password == "hello") {
			cout << "correct password! access granted" << endl;
			break;
		} else {
			cout << "incorrect password" << endl;

		}

	} while (password == "hello");

	//****************************************infinite whileloop

	while (true) {
		string password;

		cout << "Enter the password" << endl;
		cin >> password;
		if (password == "hello") {
			cout << "correct password! access granted" << endl;
			break;
		} else {
			cout << "incorrect password" << endl;

		}

	}

	//********************************* infinite do-while loop

	do {
		string password;
		cout << "Enter the password" << endl;
		cin >> password;
		if (password == "hello") {
			cout << "correct password! access granted" << endl;
			break;
		} else {
			cout << "incorrect password" << endl;

		}

	} while (true);

	float myFloat;
	cout << "Enter your own floating point value: " << endl;
	cin >> myFloat;
	cout << "Excellent, you have selected " << myFloat << " to be your float!"
			<< endl;
	cout << "Is it negative? " << endl;
	if (myFloat < 0) {
		cout << "Yes your value is negative. " << endl;
	} else {
		cout << "No your value isn't negative. " << endl;
	}

	bool myBoolean;
	cout << "What's your boolean value?: Enter 1 for true and 0 for false."
			<< endl;
	cin >> myBoolean;
	if (myBoolean == true) {
		cout << "you have selected true: True" << endl;
	} else {
		cout << "you have selected: False" << endl;
	}
	return 0;
}

