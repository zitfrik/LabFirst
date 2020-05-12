#include<iostream>
#include <locale.h>

using namespace std;

void zadanie_2_1(int arr[]) {
	for (int i = 0; i != 4; i++) {
		cout << &arr[i] << endl;
	}
}
void zadanie_2_2(int arr[2][2]) {
	for (int i = 0; i != 2; i++) {
		for (int j = 0; j != 2; j++) {
			cout << &arr[i][j] << endl;
		}
	}
}
void zadanie_2_3(int ** arr) {
	for (int i = 0; i != 2; i++) {
		for (int j = 0; j != 2; j++) {
			cout << &arr[i][j] << endl;
		}
	}
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "russian");
	int* dynam_arr = new int[4];
	int n = 1;
	cout << "Введите число: ";
	cin >> n;
	int arr[4] = { n, n+1, n+2, n+3 };
	int d = n;
	for (int i = 0; i != 4; i++) {
		dynam_arr[0] = d;
		d += 1;
	}
	int k = n;
	int arr_dvum[2][2];
	for (int i = 0; i != 2; i++) {
		for (int j = 0; j != 2; j++) {
			arr_dvum[i][j] = k;
			k += 1;
		}
	}
	int** dynam_arr_dvum = new int* [2];
	dynam_arr_dvum[0] = new int[2];
	dynam_arr_dvum[1] = new int[2];
	int l = n;
	for (int i = 0; i != 2; i++) {
		for (int j = 0; j != 2; j++) {
			dynam_arr_dvum[i][j] = l;
			l += 1;
		}
	}
	cout << "Массив" << endl;
	zadanie_2_1(arr);
	cout << "Двумерный массив" << endl;
	zadanie_2_2(arr_dvum);
	cout << "Динамический массив" << endl;
	zadanie_2_1(dynam_arr);
	cout << "Динамический двумерный массив" << endl;
	zadanie_2_3(dynam_arr_dvum);
	return 0;
