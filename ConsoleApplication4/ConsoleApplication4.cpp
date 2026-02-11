#include <iostream>
using namespace std;

int main() {
	int d;
	int x;
	int sum = 0;
	int max = 0;
	int min = 0;
	float avg = 0;
	int bel = 0;
	int temp[31];
	cout << "Enter the amount of days: ";
	cin >> d;
	if (d < 1 || d > 32) {
		cout << "NEIN!!!";
		return 0;
	}
	for (int i = 0; i < d; i++) {
		cout << "temp day " << i + 1 << ": ";
		cin >> temp[i];
		sum += temp[i];
	}
	cout << "Enter x: ";
	cin >> x;
	// Доп. задача 1 и 4
	for (int i = 0; i < d; i++) {
		if (temp[i] % x != 0) {
			cout << temp[i] << "\t";
		}
		if (temp[i] < x) {
			cout << temp[i] << "\t";
		}
	}
	for (int i = 0; i < d; i++) {
		if (max < temp[i]) {
			max = temp[i];
		}
	}
	for (int i = 0; i < d; i++) {
		if (min > temp[i]) {
			min = temp[i];
		}
	}
	avg = sum / d;
	for (int i = 0; i < d; i++) {
		if (temp[i] < 0) {
			bel++;
		}
	}
	cout << "\n" << "sum: " << sum << endl;
	cout << "avg: " << avg << endl;
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	cout << "bel: " << bel << endl;
}