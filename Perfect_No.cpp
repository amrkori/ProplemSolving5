#include<iostream>
#include<string>

using namespace std;

int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message<<endl;
		cin >> Number;
	} while (Number<=0);
	return Number;
}
bool isPerfectNumber(int Number) {
	int sum = 0;
	for (int i = 1; i < Number; i++) {
		if (Number % i == 0) {
			sum += i;
		}
		return Number == sum;
	}
}
void printResult(int Number) {
	if (isPerfectNumber(Number))
		cout << Number << "Is Perfect Number \n";
	else
		cout << Number << "Is Not Perfect Number \n";
}

int main() {
	printResult(ReadPositiveNumber("Please enter a positive Number"));

}