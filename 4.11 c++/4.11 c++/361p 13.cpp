/*
ã�ƹٲٱ� ���
����ڷκ��� �ִ� 100������ �ؽ�Ʈ�� �Է¹���
�ι�°�� ã�� ���ڿ��� �Է¹���
�ִ� 10���ڷ� ����
����°�� �ٲٴ� ���ڿ� �Է¹���
������ ���ڿ��� ã�Ƽ� �ٲ� �Ŀ� ȭ�鿡 ���
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, find, replace; // ���ڿ�
	getline(cin, str);
	cout << "Enter string to find : "; // ã�� ���ڿ�
	getline(cin, find);
	cout << "Enter string to replace : "; // ��ü�� ���ڿ�
	getline(cin, replace);

	int position = str.find(find);	// ã�� ���ڿ��� ��ġ
	cout << position << endl;
	if (position != string::npos) {	 //string::npos : string�� max_size + 1
		str.replace(position, find.size(), replace);
		cout << str << endl;
		/*
		str.erase(position, find, size());
		str.insert(position, replace);
		*/
	}
	else
		cout << find << "is not exist\n";
}