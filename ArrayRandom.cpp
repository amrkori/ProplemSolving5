
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To) {
	int random = rand() % (To - From + 1) + From;
	return random;
}

void FillArrayWithRandomNumbers(int arr[100],int& arrLength) {
	cout << "Enter Number Of Elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}


void printArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		
		cout<<arr[i];
		cout << endl;
	}
}


int main() {
	srand((unsigned)time(NULL));
	
	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray Elements ";
	printArray(arr, arrLength);

}