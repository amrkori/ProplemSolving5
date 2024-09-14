
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To) {
	int random = rand() % (To - From + 1) + From;
	return random;
}

enum enCharType{smallLetter =1, CapitalLetter = 2, SpecialCharacter =3,Digit=4};

char GetRandomCharacter(enCharType CharType) {
	switch (CharType) {
	case enCharType::smallLetter: {
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter: {
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter: {
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit: {
		return char(RandomNumber(48, 57));
		break;
	}
	}
}

int main() {
	srand((unsigned)time(NULL));
	/*
		cout << rand() % 10 << endl;
		cout << rand() << endl;
	*/
	cout << GetRandomCharacter(enCharType::smallLetter) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;


}