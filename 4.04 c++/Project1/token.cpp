#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char str[] = "Programming is art!"; // /�̿��ϸ� �ϳ��� ��ū���� �и�
	char *token;
	const char *delimiter = " /"; //������ ����

	cout << "���ڿ� �и�\n";
	token = strtok_s(str, delimiter);
	while (token != NULL) {
		cout << token << endl;
		token = strtok(NULL, delimiter);
	}
}