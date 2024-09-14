
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To) {
	int random = rand() % (To - From + 1) + From;
	return random;
}


int main() {
	srand((unsigned)time(NULL));
/*	
	cout << rand() % 10 << endl;
	cout << rand() << endl;
*/
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;

}