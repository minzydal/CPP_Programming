#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string morse_alpha[27] = { // 알파벳 모스부호
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", // ABCDEFG
	"....", "..", ".---", "-.-", ".-..", "--", "-.", // HIJKLMN
	"---", ".--.", "--.-", ".-.", "...", "-", "..-", // OPQRSTU
	"...-", ".--", "-..-", "-.--", "--..", "  " };   // VWXYZ

string morse_digit[10] = { // 숫자의 모스부호(0~9)
	"-----", ".----", "..---", "...--", ".....",
	"-....", "--...", "----..", "----.", "-..-." };

/*
std::map<int, string> morse_etc = { // 특수문자의 모스부호
	{'/', "-..-."},
	{'?', "..--.."},
	{',', "--..--"},
	{'.', ".-.-.-"},
	{'+', ".-.-"},
	{'=', " -...-"},
	{' ', " "}
};
*/

string morse_unknown = " "; //알 수 없는 문자는 ? 

const string& char_to_morse(int ch) //입력한 문자 or 숫자 모스로 변환
{
	if ('0' <= ch && ch <= '9')
		return morse_digit[ch - '0'];

	if ('A' <= ch && ch <= 'Z')
		return morse_alpha[ch - 'A'];

	if ('a' <= ch && ch <= 'z')
		return morse_alpha[ch - 'a'];

	/*
	auto i = morse_etc.find(ch);
	if (i != morse_etc.end())
		return i->second;
	*/
	//return morse_unknown; // 알 수 없는 기호
}

char morse_to_char(const string& morse)
{
	for (int i = 0; i < 27; ++i)
		if (morse_alpha[i] == morse)
			return i + 'A';

	for (int i = 0; i < 10; ++i)
		if (morse_digit[i] == morse)
			return i + '0';
	/*
	for (auto& code : morse_etc)
		if (code.second == morse)
			return code.first;
			*/
	return ' ';
}

int main()
{
	//문자열 -> 모스

	cout << "Please enter the English text to convert to Morse code : " << endl;
	string text;
	getline(cin, text); //문자를 입력받음

	// 변환
	string morse;
	for (auto ch : text)
	{
		morse += char_to_morse(ch);
		morse += '|';
	}

	// 출력
	cout << morse << endl;

	// 모스 -> 문자열

	// 변환
	string result;
	stringstream ss(morse);
	while (ss >> text)
		result += morse_to_char(text);

	// 출력
	cout << result << endl;
	return 0;
}
