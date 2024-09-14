#include<iostream>
using namespace std;


float ReadNumber() {
	float Number;
	cout << "Enter a Number" << endl;
	cin >> Number;
	return Number;
}

int MySqrt(float Number) {

	return pow(Number, 0.5);
}




int main() {
	float number = ReadNumber();

	cout << "My Sqrt Result: " << MySqrt(number) << endl;
	cout << "C++ Sqrt Result: " << sqrt(number);

}















