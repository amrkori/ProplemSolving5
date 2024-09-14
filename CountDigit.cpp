
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

int CountDigits(short DigitToCheck,int Number) {
	int Remainder = 0;
	int FreqCount = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder) {
			FreqCount++;
		}
	}
	return FreqCount;
}

int main() {
	int Number = ReadPositiveNumber("Please enter positive Number");
	short DigitToCheck = ReadPositiveNumber("Please enter digit to check");
	cout << endl << "Digit " << DigitToCheck << endl << "Frequency is " << CountDigits(DigitToCheck, Number)<<" Times "<<endl;

}