#include <iostream>

using namespace std;

double harmonicMean(double num1, double num2);

int main() {

	double num1, num2, hMean;
	cout << "Enter a pire of numbers: ";
	cin >> num1 >> num2;
	while (num1 != 0 && num2 != 0) {
		hMean = harmonicMean(num1, num2);
		cout << "The harmonic mean is " << hMean << endl;
		cout << "Enter a pire of numbers: ";
		cin >> num1 >> num2;
	}

	return 0;
}

double harmonicMean(double num1, double num2) {

	double result = 2.0 * num1 * num2 * (num1 + num2);

	return result;
}