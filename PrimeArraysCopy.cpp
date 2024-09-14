#include<iostream>
using namespace std;

enum enPrimNotPrime{Prime=1,NotPrime=2};

enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++) 
	{ 
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime;
	} 
	return enPrimNotPrime::Prime; 
}

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

void CopyOnlyPrimeNumber(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length) {
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
		{
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}
	}
	arr2Length = --Counter;
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

	int arr[100],arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100], arr2Length=0;
	CopyOnlyPrimeNumber(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements:\n ";
	PrintArray(arr, arrLength);

	cout << "\nPrime Numbers in Array2 : ";
	PrintArray(arr2, arr2Length);

}
