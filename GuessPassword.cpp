
#include<iostream>
#include<string>
using namespace std;

string ReadPassword() {
	string password;
	cout << "please enter a 3 letters password (all capital)?\n";
	cin >> password;
	return password;
}

bool GuessPassword(string OriginalPassword) {
	cout << "\n";
	string word = "";
	int counter = 0;
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				counter++;
				cout <<"Trial [" << counter <<"]" << endl;
				cout << word<<endl;
				if (word == OriginalPassword) {
					cout << "\n Password is : " << word << "\n";
					cout << "Found after ";
					cout << counter << " trials \n";
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}



int main() {
	GuessPassword(ReadPassword());

}