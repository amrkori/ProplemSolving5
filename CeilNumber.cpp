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

int MyCeil(float Number) {
	
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) > 0) {
		if (Number > 0)
			return int(Number) +1;
		else
			return int(Number);
	}
	else {
		return Number;
	}
}


/*
int MyCeil(float Number) {
	int IntPart;
	IntPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= 0) {
		if (Number > 0)
			return ++IntPart;
		else
			return IntPart;
	}
	else {
		return IntPart;
	}
}
*/


int main() {
	float number = ReadNumber();

	cout << "My ceil Result: " << MyCeil(number) << endl;
	cout << "C++ ceil Result: " << ceil(number);

}















