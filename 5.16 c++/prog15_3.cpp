// 파일을 입출력용으로 open하는 경우

#include <iostream>
#include <fstream>
using namespace std;

struct list {
	int num;
	char name[20];
};

int main() {
	list dir;
	fstream f;
	int number;

	f.open("list.bin", ios::binary | ios::out | ios::in);
	while (1) {
		cout << "Enter number(종료 -1) : ";
		cin >> dir.num;
		if (dir.num == -1)
			break;
		cin.ignore();
		cout << "Enter name : ";
		cin.getline(dir.name, 20);	// 전체 라인 입력
		f.write((char *)&dir, sizeof(dir));
	}

	f.seekg(OL, ios::beg);	//파일 포인터를 처음으로 이동
	/* seekg long타입 받음, int 써도 상관 x */
	cout << f.tellg() << endl;
	f.read((char *)&dir, sizeof(dir));

	while (!f.eof()) {
		cout << dir.num << ", " << dir.name << endl;
		f.read((char *)&dir, sizeof(dir));
	}
	//f.clear();	//eof를 체크하면 eofbit이 설정되고 이후로는 seekg가 동작하지 않는다
					//clear() 함수로 eofbit을 reset한다
	f.clear();		//eofbit reset
	f.seekg(OL, ios::beg);	//파일 포인터를 처음으로 이동
	cout << f.tellg() << endl;
	while (1) {
		cout << "Enter number(종료 -1) : ";
		cin >> number;
		if (number == -1)
			break;
		f.seekg(number * sizeof(dir), ios::beg);	//파일 포인터를 해당 레코드로 이동
		cout << f.tellg() << endl;
		f.read((char *)&dir, sizeof(dir));
		cout << dir.num << ", " << dir.name << endl;
	}
	f.close();
}