#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == Number) {
            return i;
        }
    }
    return -1;  // Return -1 if the number is not found
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrLength = 0, arrDestinationLength = 0;

    FillArray(arr, arrLength);

    CopyDistinctNumbersToArray(arr, arr2, arrLength, arrDestinationLength);

    cout << "\nArray 1 Elements \n";
    PrintArray(arr, arrLength);

    cout << "\nArray Distinct Elements after copy\n";
    PrintArray(arr2, arrDestinationLength);

    return 0;
}
