// keyboard �Է��� ���Ͽ� ����, get�� put �Լ� �̿�

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream is;
	ofstream os;
	char ch;

	os.open("test.txt");

	while (cin.get(ch))	// keyboard �Է�
//	while ((ch = cin.get()) != EOF) // keyboard �Է��� ���� �� ����
		os.put(ch);					// EOF == ^z
	os.close();

	is.open("test.txt");
	while (is.get(ch))
		//	while((ch = is.get()) != EOF) // ������ ���� ������ ������
		cout.put(ch);
	is.close();
}
