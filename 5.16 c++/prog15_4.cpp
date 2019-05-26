
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void main() {
	ifstream is;
	char word[10], line[100];
	int number = 0;

	is.open("prog15_4.cpp");
	if (is.fail()) {
		cout << "File open error\n";
		exit(1);
	}
	cout << "Enter word : ";
	cin >> word;

	is.getline(line, 100);
	while (!is.eof()) {
		if (strstr(line, word) != NULL)
			cout << number << " " << line << endl;
		is.getline(line, 100);
		number++;
	}
	is.close();
}

/*
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void strstr(string, string, int);

int main() {
	string line, input;
	int number = 1;

	ifstream is("porg15_4.cpp");

	char word[10], line[100];
	int number = 0;

	is.open("porg15_4.cpp");
	if (is.fail()) {
		cout << "File open error\n";
		exit(1);
	}
	cout << "Enter word : ";
	cin >> word;



	cout << "Enter string to search : ";
	cin >> input;

	while(!is.eof()){
		getline(is, line);
		strstr(line, input, number);
		number++;
	}
	is.close();
	return 0;
}

void strstr(string line, string input, int num) {
	unsigned i, j;
	unsigned count = input.size();

	for (i = 0; i < line.size(); i++) {
		if (line[i] == input[0]) {
			for (j = 0; j < count; j++) {
				if (line[i + j] != input[j])
					break;
			}
			if (j == count)
				cout << num << " : " << line << endl;
		}
	}
}
*/