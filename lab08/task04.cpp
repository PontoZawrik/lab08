#include "main.h"

int task04_1(int*, int);
int task04_2(int*, int);
void task04_3(int*, int);

void task04() {
	int size = 10;
	int* array = new int[size] { 97, 0, -12, 26, 62, -83, -94, 0, -66, 0 };

	int p;

	do {
		cout << "Введите номер подзадания (-1 для выхода): ";
		cin >> p;

		switch (p) {
			case 1: {
				cout << "Произведение четных элементов: " << task04_1(array, size) << endl;
				break;
			}

			case 2: {
				cout << "Сумма: " << task04_2(array, size) << endl;
				break;
			}

			case 3: {
				task04_3(array, size);

				cout << "Array: ";
				for (int i = 0; i < size; i++) {
					cout << array[i] << " ";
				}
				cout << endl;

				break;
			}

			case -1: cout << "Выход из подпрограммы.\n"; break;
			default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	delete[] array;
	return;
}


int task04_1(int* array, int size) {
	int mul = 1;

	for (int i = 0; i < size; i += 2) {
		mul *= array[i];
	}

	return mul;
}


int task04_2(int* array, int size) {
	bool flag = false;

	int i = 0;
	for ( ; !flag && i < size; i++) {
		if (array[i] == 0) {
			flag = true;
			break;
		}
	}

	int sum = 0;
	int tSum = 0;

	if (flag) {
		for ( ; i < size; i++) {
			tSum += array[i];

			if (array[i] == 0) {
				sum = tSum;
			}
		}
	}

	return sum;
}


void task04_3(int* array, int size) {
	int t;

	for (int i = 0; i < (size - 1); i++) {
		for (int j = 0; j < (size - i - 1); j++) {
			if (array[j] < array[j + 1]) {
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
	
	return;
}