
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
int ReversedNumber(int Number) {
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
void printDigits(int Number) {
	int Remainder = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}

int main() {

	printDigits(ReversedNumber(ReadPositiveNumber("Please enter a positive Number")));

}