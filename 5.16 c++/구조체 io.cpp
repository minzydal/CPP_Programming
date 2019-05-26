/*
구조체 데이터의 파일 입출력
구조체 1개씩 입출력
*/

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

	os.open("test.bin", ios::binary);	//출력 파일 오픈

/*	for (int i = 0; i < 3; i++)	//구조체 한개씩 출력
	os.write((char *)&grade[i], sizeof(score));*/
	
	os.write((char *)grade, sizeof(grade));	//구조체 배열 전체 출력

	os.close();

	is.open("test.bin", ios::binary);	//입력 파일 오픈

/*	is.read((char *)&s, sizeof(score));	//구조체 한개씩 출력
	while (!is.eof()) {
		cout << s.number << "," << s.name << "," << s.point << endl;
		is.read((char *)&s, sizeof(score));
*/
	is.read((char *)g, sizeof(g));	//구조체 한개씩 출력
	for (int i = 0; i < 3; i++)
		cout << g[i].number << "," << g[i].name << "," << g[i].point << endl;
		
	is.close();
}