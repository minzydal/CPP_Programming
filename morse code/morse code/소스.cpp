#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string morse_alpha[26] = {
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", // ABCDEFG
	"....", "..", ".---", "-.-", ".-..", "--", "-.", // HIJKLMN
	"---", ".--.", "--.-", ".-.", "...", "-", "..-", // OPQRSTU
	"...-", ".--", "-..-", "-.--", "--.." };         // VWXYZ

string morse_digit[10] = {
	"-----", ".----", "..---", "...--", ".....",
	"-....", "--...", "----..", "----.", "-..-." };

string morse_unknown = "?";

const string& char_to_morse(int ch)
{
	if ('0' <= ch && ch <= '9')
		return morse_digit[ch - '0'];

	if ('A' <= ch && ch <= 'Z')
		return morse_alpha[ch - 'A'];

	if ('a' <= ch && ch <= 'z')
		return morse_alpha[ch - 'a'];

	return morse_unknown;
}

char morse_to_char(const string& morse)
{
	for (int i = 0; i < 26; ++i)
		if (morse_alpha[i] == morse)
			return i + 'A';

	for (int i = 0; i < 10; ++i)
		if (morse_digit[i] == morse)
			return i + '0';

	return ' ';
}



int main()
{
	//-----------------------------------------------
	// 문자열 => 모스
	//-----------------------------------------------

	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
	string temp;
	getline(cin, temp);

	// 변환
	string morse;
	for (auto ch : temp)
	{
		morse += char_to_morse(ch);
		morse += ' ';
	}

	// 출력
	cout << morse << endl;

	//-----------------------------------------------
	// 모스 => 문자열
	//-----------------------------------------------

	// 변환
	string result;
	stringstream ss(morse);
	while (ss >> temp)
		result += morse_to_char(temp);

	// 출력
	cout << result << endl;
	return 0;
}
