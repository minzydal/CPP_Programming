/*
�����ϳ��� �о �����̳� ������̳� �Ǵ�
ch�� switch���� �� �� ����
�����ڸ� �ִ´ٰ� �������� �� 
ex ) case 'a',,'i',,
*/
#include <iostream>
#include <cctype> //character
using namespace std;

int main() {

	char ch;
	cout << "���� �ϳ��� �Է��ϼ���: \n";
	cin >> ch;
	ch = tolower(ch); //�빮�ڸ� �ҹ��ڷ� ��ȯ�ؼ� �ٽ� �Է�.

	if (isalpha(ch)) {
		switch (ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cout << "����.\n";
				break;

			default:
				cout << "�����.\n";
				break;
			}
		}
	else {
			cout << "Wrong input\n";
	}
}