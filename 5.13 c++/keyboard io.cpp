// keyboard 입력을 파일에 저장, get과 put 함수 이용

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream is;
	ofstream os;
	char ch;

	os.open("test.txt");

	while (cin.get(ch))	// keyboard 입력
//	while ((ch = cin.get()) != EOF) // keyboard 입력이 끝날 때 까지
		os.put(ch);					// EOF == ^z
	os.close();

	is.open("test.txt");
	while (is.get(ch))
		//	while((ch = is.get()) != EOF) // 파일의 끝에 도달할 때까지
		cout.put(ch);
	is.close();
}
