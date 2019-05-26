#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string morse_alpha[27] = {
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", // ABCDEFG
	"....", "..", ".---", "-.-", ".-..", "--", "-.", // HIJKLMN
	"---", ".--.", "--.-", ".-.", "...", "-", "..-", // OPQRSTU
	"...-", ".--", "-..-", "-.--", "--..", "  " };   // VWXYZ

string morse_digit[10] = {
	"-----", ".----", "..---", "...--", ".....",
	"-....", "--...", "----..", "----.", "-..-." };

string morse_space = " ";
// 공백에 띄어쓰기 문자

const string& char_to_morse(int ch)
{
	if ('0' <= ch && ch <= '9')
		return morse_digit[ch - '0'];

	if ('A' <= ch && ch <= 'Z')
		return morse_alpha[ch - 'A'];

	if ('a' <= ch && ch <= 'z')
		return morse_alpha[ch - 'a'];

	return morse_space;
}

char morse_space1 = ' ';

char morse_to_char(const string& morse)
{
	for (int i = 0; i < 27; ++i)
		if (morse_alpha[i] == morse)
			return i + 'A';

	for (int i = 0; i < 10; ++i)
		if (morse_digit[i] == morse)
			return i + '0';

	return morse_space1;
}

int main()
{
	// 문자열 => 모스

	cout << "Please enter the text in English to convert to morse code." << endl;
	string text; //내가 입력할 문자열
	getline(cin, text); //getline 

	// 변환
	string morse;
	for (auto ch : text)
	{
		morse += char_to_morse(ch);
		morse += ' ';
	}

	// 출력
	cout << morse << endl;

	// 모스 => 문자열

	// 변환
	string result;
	stringstream ss(morse);
	while (ss >> text)
		result += morse_to_char(text);

	// 출력
	cout << result << endl;
	return 0;
}