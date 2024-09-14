#include<iostream>
using namespace std;


float ReadNumber() {
	float Number;
	cout << "Enter a Number" << endl;
	cin >> Number;
	return Number;
}

float GetFractionPart(float Number) {
	return Number - (int)Number;
}

int MyRound(float Number) {
	int IntPart;
	IntPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5) {
		if(Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else {
		return IntPart;
	}
}

int main() {
	float number = ReadNumber();

	cout << "My Round Result: " << MyRound(number) << endl;
	cout << "C++ Round Result: " << round(number);

}















