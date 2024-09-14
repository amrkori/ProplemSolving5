
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

int ReverseNumber(int Number) {
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
bool isPalindromeNumber(int Number) {
	return Number == ReverseNumber(Number);
}



int main() {
	if (isPalindromeNumber(ReadPositiveNumber("please enter a positive number")))
		cout << "\nyes, it is a palindrome number \n";
	else
		cout << "\nNo, it is Not a palindrome number \n";

}