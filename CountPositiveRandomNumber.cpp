#include<iostream>
using namespace std;


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

		arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

int PositiveCount(int arr[100], int arrLength) {
	int count = 0;
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] > 0) {
			count++;
		}
	}
	return count;
}





int main() {

	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 Elements \n";
	PrintArray(arr, arrLength);
	cout << "\nArray Odd Numbers Count\n";
	cout << PositiveCount(arr, arrLength) << endl;


}















