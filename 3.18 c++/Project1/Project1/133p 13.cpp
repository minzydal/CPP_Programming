#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {

	int computer, user;
	char again = 'y';

	srand((unsigned)time(NULL));

	while (again == 'y') {

		cout << "가위 = 0\n";
		cout << "바위 = 1\n";
		cout << "보 = 2\n";
		cout << "종료 = 3\n";

		cout << "Please select the number : ";
		cin >> user;

		computer = rand() % 3;

		switch (user) {

		case 0:
			if (computer == 0)
				cout << "User = " << user << " Computer = " << computer << " It's a tie." << endl;

			else if (computer == 1)
				cout << "User = " << user << " Computer = " << computer << " You lose." << endl;

			else if (computer == 2)
				cout << "User = " << user << " Computer = " << computer << " You win." << endl;

			break;

		case 1:
			if (computer == 0)
				cout << "User = " << user << " Computer = " << computer << " You win" << endl;

			else if (computer == 1)
				cout << "User = " << user << " Computer = " << computer << " It's a tie." << endl;

			else if (computer == 2)
				cout << "User = " << user << " Computer = " << computer << " You lose." << endl;

			break;

		case 2:
			if (computer == 0)
				cout << "User = " << user << " Computer = " << computer << " You lose" << endl;

			else if (computer == 1)
				cout << "User = " << user << " Computer = " << computer << " You win." << endl;

			else if (computer == 2)
				cout << "User = " << user << " Computer = " << computer << " It's a tie." << endl;

			break;

		case 3:
			exit(0);

		default:
			cout << "Please try again. You entered wrong number. ( y = continue )" << endl;
			cin >> again;
			if (again == 'y')
				continue;
			else
				break;
		}
	}
}