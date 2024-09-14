#include<iostream>
using namespace std;


int ReadNumber()
{
	int Number = 0;
	cout << "Please Enter a number to search" << endl;
	cin >> Number;
	return Number;
}

int RandomNumber(int From, int To)
{ //Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
	cout << "Enter Number Of Elements ?\n";
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

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	/*This function will search for a number in array and return its index,
	 or return -1 if it does not exists*/

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == Number)
			return i;// and return the index
	}
	return -1; // if you reached here, this means the number is not found
}

bool IsNumberInArray(int Number, int arr[100], int arrLength) {
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	int number = ReadNumber();
	cout << "Number you are looking for is: " << number << endl;


	if (!IsNumberInArray(number, arr, arrLength))
		cout << "Not Found";
	else 
		cout << "Yes,it is found";
	



}



