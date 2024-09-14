#include<iostream>
using namespace std;

enum enCharType { smallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{ //Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

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

void PrintStringArray(string arr[100], int arrLength) {
	cout << "\nArray elements:\n\n";
	for (int i = 0; i < arrLength; i++) {
		cout << "Array [" << i+1 << "] : ";
		cout << arr[i] << "\n";
	}
	cout << endl;
}

string generateWord(enCharType chartype, short length) {
	string word;
	for (int i = 1; i <= length; i++) {
		word = word + GetRandomCharacter(chartype);
	}
	return word;
}

string GenerateKey() {
	string key = "";
	key = generateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + generateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + generateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + generateWord(enCharType::CapitalLetter, 4);
	return key;
}

void FillArrayWithKeys(string arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateKey();
}


int main() {
	srand((unsigned)time(NULL));
	
	string arr[100];
	int arrLength = 0;
	
	arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");

	FillArrayWithKeys(arr, arrLength);
	PrintStringArray(arr, arrLength);

}



