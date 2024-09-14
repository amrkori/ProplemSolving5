
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To) {
	int random = rand() % (To - From + 1) + From;
	return random;
}

enum enCharType { smallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

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

int ReadPositiveNumber(string messsage) {
	int number = 0;
	do
	{
		cout << messsage;
		cin >> number;
	} while (number<=0);
	return number;
}

string GenerateWord(enCharType CharType, short Length) {
	string word;
	for (int i = 1; i <= Length; i++) {
		word = word + GetRandomCharacter(CharType);
	}
	return word;
}
string generateKey() {
	string key = "";
	key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4);
	return key;

}
void GenerateKeys(short NumberOfKeys) {
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "keys [" << i << "] : ";
		cout << generateKey() << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));
	/*
		cout << rand() % 10 << endl;
		cout << rand() << endl;
	*/
	GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate? \n"));

}