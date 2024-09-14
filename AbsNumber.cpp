#include<iostream>
using namespace std;


float ReadNumber() {
	float Number;
	cout << "Enter a Number"<<endl;
	cin >> Number;
	return Number;
}

float MyAbs(float Number) {
	if (Number > 0) 
		return Number;
	else
		return Number * -1;
	
}


int main() {
	int number = ReadNumber();

	cout << "My Abs Result: " << MyAbs(number)<<endl;
	cout << "C++ Abs Result: " << abs(number);

}















