#include<iostream>
using namespace std;

/*
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
*/

int RandomNumber(int From, int To)
{ //Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		arrDestination[i] = arrSource[arrLength - 1 - i];
	}
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100], arrLength, arr2[100];

	FillArrayWithRandomNumbers(arr, arrLength);

	CopyArrayInReverseOrder(arr, arr2, arrLength);


	cout << "\nArray 1 Elements :\n";
	PrintArray(arr, arrLength);


	cout << "\nArray 2 Elements After copy\n";
	PrintArray(arr2, arrLength);

}
