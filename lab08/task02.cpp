#include "main.h"

void task02() {
	int size;

	cout << "¬ведите величину массива: ";
	cin >> size;

	double* array = new double[size];
	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "]: ";
		cin >> array[i];
	}

	double sum = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] >= 0) {
			sum += array[i];
		}
		else {
			sum = 0;
		}
	}

	cout << "sum = " << sum << endl;

	delete[] array;

	return;
}