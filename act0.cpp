/******************************************************************************

CS 325 Activity 0
Optional template for obtaining user input and providing output
Save as act0.cpp before submitting to Gradescope

Nils Streedain
Jack Stevenson
Jackson Hart

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
	int A[1000];  	// array of elements <= 1000
	int num;		// number of elements in the array
	cin >> num;		// read in number of elements
	cin >> A[0];	// the list will have at least one element
	for (int j = 1; j < num; j++) {
		cin >> A[j];
	}
	
	int lo = A[0];
	int hi = A[0];
	
	for (int i = 1; i < num; i++) {
		if (lo > A[i])
			lo = A[i];
		if (hi < A[i])
			hi = A[i];
	}
	
	for (int i = 0; i < num; i++) {
		if (A[i] == lo && (A[i - 1] == hi || A[i + 1] == hi)) {
				// the largest element is next to the smallest
				cout << "True";
				return 1;
		}
	}
	
	// the largest element is not next to the smallest
	cout << "False";
	return 0;
}
