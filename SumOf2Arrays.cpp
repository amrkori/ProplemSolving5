#include<iostream>
using namespace std;
int RandomNumber(int From, int To)
{ //Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	
	for (int i = 0; i < arrLength; i++)

		arr[i] = RandomNumber(1, 100);
}

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}


void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) {
	int Sum = 0;

	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}

}



int main() {
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrSum[100];
	int arrLength = ReadPositiveNumber("How many elements?\n");

	FillArrayWithRandomNumbers(arr, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	SumOf2Arrays(arr, arr2, arrSum, arrLength);

	cout << "\nArray 1 Elements ";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 Elements ";
	PrintArray(arr2, arrLength);

	cout << "\nSum of array1 and array2 elements:\n";
	PrintArray(arrSum, arrLength);

}
