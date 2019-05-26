/*
입출력을 동시에 할 수 있는 방법
입출력을 동시에 할 수 있도록 파일을 열면
seekg, seekp, tellg, tellp 모두 사용 가능
한가지로 통일해서 사용한다
ios::in이 있기 때문에 미리 파일을 만들어야 한다
*/

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	int table[5], data, pos;
	fstream f;

	for (int i = 0; i < 5; i++)
		table[i] = i + 10;
	f.open("test.bin", ios::out | ios::binary | ios::in);
	if (f.fail()){
		cout << "File open error\n";
	exit(1);
	}

	f.write((char *)table, sizeof(table));
	cout << f.tellg() << endl;	// 파일 포인터는 파일 끝에 있다

	f.seekg(0, ios::beg);	//파일의 처음으로 이동
	while (1) {
		cout << "파일에서 위치 입력(0-9, 종료 -1) : ";
		cin >> pos;
		if (pos == -1)
			break;
		f.seekg(pos * sizeof(int), ios::beg);
		cout << f.tellg() << endl;
		f.read((char *)&data, sizeof(int));
		cout << pos << "위치의 값 : " << data << endl;
		cout << f.tellp() << endl;
	}

	f.close();
}