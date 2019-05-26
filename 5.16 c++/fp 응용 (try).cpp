
#include <iostream>
#include <fstream>
using namespace std;

struct score {	//구조체는 디폴트가 public
	int number;

	char name[30];
	int point;
};
//typedef struct score score; // C style

void main() {
	score grade[] = { {1, "홍길동", 100}, {2, "김유신", 90}, {3, "강감찬", 80} };
	score g[3];
	score s;
	ofstream os;
	ifstream is;

	os.open("test.bin", ios::binary);

	for (int i = 0; i < 5; i++)
		os.write((char *)grade, sizeof(grade));	
	cout << os.tellp() << endl;
	os.close();

	is.open("test.bin", ios::binary);

	while (1) {
		cout << "파일에서 위치 입력(0-4, 종료 -1) : ";
		cin >> pos;
		if (pos == -1)
			break;
		is.seekg(pos * sizeof(int), ios::beg);
		cout << is.tellg() << endl;
		is.read((char *)&data, sizeof(int));
		cout << pos << "위치의 값 : " << data << endl;
		cout << is.tellg() << endl;
	}

	is.seekg(0, ios::end);
	cout << is.tellg() << endl;
	is.seekg(-4, ios::end);
	cout << is.tellg() << endl;
	is.read((char *)&data, sizeof(int));
	cout << data << endl;

	is.close();
}

/*
마지막 데이터를 읽으려면 끝에서 4byte 떨어진 곳으로 이동해야 한다

	is.seekg(0, ios::end);
	cout << is.tellg() << endl;
	is.seekg(-4, ios::end);
	cout << is.tellg() << endl;
	is.read((char *)&data, sizeof(int));
	cout << data << endl;
*/