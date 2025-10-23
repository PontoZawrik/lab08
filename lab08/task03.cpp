#include "main.h"

void task03() {
	int n = getRandomInt(10, 15);
	double* array = new double[n];

	int count = 0;

	cout << "Array: \n";
	for (int i = 0; i < n; i++) {
		array[i] = getRandomFloat(-5, 10);
		cout << array[i] << " ";
		count += array[i] > 0 ? 1 : 0;
	}

	int m = n + count;
	double* newArray = new double[m];

	for (int i = 0, k = 0; i < n; i++, k++) {
		newArray[k] = array[i];
		if (newArray[k] > 0) {
			newArray[k + 1] = 0;
			k++;
		}
	}

	cout << "\nNew array: \n";
	for (int i = 0; i < m; i++) {
		cout << newArray[i] << " ";
	}
	cout << endl;


	delete[] array, newArray;

	return;
}