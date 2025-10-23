#include "main.h"

void task01() {
	int n = getRandomInt(10, 15);
	int m = getRandomInt(10, 15);

	double* A = new double[n];
	double* B = new double[m];

	int iMaxA = 0;
	int iMaxB = 0;

	for (int i = 0; i < n; i++) {
		A[i] = getRandomFloat(-5, 10);
		iMaxA = A[i] > A[iMaxA] ? i : iMaxA;
	}

	for (int i = 0; i < m; i++) {
		B[i] = getRandomFloat(-5, 10);
		iMaxB = B[i] > B[iMaxB] ? i : iMaxB;
	}

	double* ref1;
	double* ref2;
	int length1, length2;
	int iMax;

	if (A[iMaxA] > B[iMaxB]) {
		ref1 = A;
		ref2 = B;
		length1 = n;
		length2 = m;
		iMax = iMaxA;
	}
	else {
		ref1 = B;
		ref2 = A;
		length1 = m;
		length2 = n;
		iMax = iMaxB;
	}

	cout << "arrayMax: \n";
	for (int i = 0; i < length1; i++) {
		cout << ref1[i] << " ";
	}
	cout << "\nmax = " << ref1[iMax] << " index = " << iMax << endl;

	cout << "\narray: \n";
	for (int i = 0; i < length2; i++) {
		cout << ref2[i] << " ";
	}

	delete[] ref1, ref2, A, B;

	return;
}