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
	} while (q <= 5);

	i = 50;
	if (i == 50) {
		cout << "i is 50" << endl;
	}

	cout << "Program terminated" << endl;



	return 0;
}

