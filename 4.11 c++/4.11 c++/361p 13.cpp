/*
찾아바꾸기 기능
사용자로부터 최대 100글자의 텍스트를 입력받음
두번째로 찾는 문자열을 입력받음
최대 10글자로 제한
세번째로 바꾸는 문자열 입력받음
지정된 문자열을 찾아서 바꾼 후에 화면에 출력
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, find, replace; // 문자열
	getline(cin, str);
	cout << "Enter string to find : "; // 찾을 문자열
	getline(cin, find);
	cout << "Enter string to replace : "; // 교체할 문자열
	getline(cin, replace);

	int position = str.find(find);	// 찾는 문자열의 위치
	cout << position << endl;
	if (position != string::npos) {	 //string::npos : string의 max_size + 1
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