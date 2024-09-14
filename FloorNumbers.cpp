#include<iostream>
using namespace std;


float ReadNumber() {
	float Number;
	cout << "Enter a Number" << endl;
	cin >> Number;
	return Number;
}



int MyFloor(float Number) {

	if (Number > 0) 
		return int(Number);
	else
		return int(Number) - 1;
		
}

int main() {
	float number = ReadNumber();

	cout << "My Floor Result: " << MyFloor(number) << endl;
	cout << "C++ Floor Result: " << floor(number);

}















