
#include<iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int sumOfDigits(int Number) {
	int Remainder = 0;
	int sum = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		sum += Remainder;
	}
	return sum;
}

int main() {

	cout << sumOfDigits(ReadPositiveNumber("Please enter a positive Number"));

}