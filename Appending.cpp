#include<iostream>
#include<fstream>
#include<algorithm>

//Standard namespace declaration
using namespace std;

int main() {
	string input;
	fstream f;
	f.open ("CSC450_CT5_mod5.txt", ios::app);
	if (!f) {
		cout << "File doesn't exist!";
	}
	else {
		cout << "Enter string to add to file: ";
		getline(cin, input);
		f << "\n" << input;
		cout << "Data appended\n";
		f.close();
	}

	string file;
	f.open("CSC450_CT5_mod5.txt");
	getline(f, file, '\0');
	f.close();
	reverse(file.begin(), file.end());
	fstream f2("CSC450-mod5-reverse.txt");
	f2 << file;
	f2.close();
	cout << "Reverse written to file.";

	return 0;
}
