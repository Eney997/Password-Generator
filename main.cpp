#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>

using namespace std;

string getPassword(int length) {
	string Password = "";
	string characters = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	int charSize = characters.size();
	srand(time(0));
	int randomIndex;
	for (int i = 0; i < length; i++) {
		randomIndex = rand() % charSize;
		Password = Password + characters[randomIndex];
	}
	return Password;
};

int main() {
		
	again:

	int length;
	cout << "\n\n\tEnter length of the Password: ";
	cin >> length;

	string password = getPassword(length);
	cout << "\tGenerated password is: "<<password;

	askAgain:
	int var = 0;
	cout << "\n\n\tWourld you like to try again?";
	cout << "\n\tIf yes enter number 1";
	cout << "\n\tIf you want to exit press 2";
	cout << "\n\tEnter your answer here: ";
	cin >> var;

	if (var == 1) {
		system("cls");
		goto again;
	}
	else if (var == 2) {
		goto ext;
	}
	else(var); {
		cout << "\n\tivvalid input";
		Sleep(2000);
		system("cls");
		goto askAgain;
	};
	goto again;

	ext:

	return 0;
}