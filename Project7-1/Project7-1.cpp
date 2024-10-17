#include <iostream>

using namespace std;

double smallest_number;

int main() {
	double smallest(double x, double y, double z);
	double average(double x, double y, double z);

	double num1, num2, num3;

	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;
	double answer1 = smallest(num1, num2, num3);
	cout << "Smallest value is: " << answer1 << endl;
	double answer2 = average(num1, num2, num3);
	cout << "Average is " << answer2;
	
}

double smallest(double x, double y, double z) {
	
	if ((x < y) && (x < z)) {
		return x;
	}
	else if ((y < x) && (y < z)) {
		return y;
	}
	else {
		return z;
	}
}

double average(double x, double y, double z) {
	double sum = x + y + z;
	double average = sum / 3;
	return average;
}