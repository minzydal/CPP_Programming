#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string morse_alpha[27] = { // ���ĺ� �𽺺�ȣ
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", // ABCDEFG
	"....", "..", ".---", "-.-", ".-..", "--", "-.", // HIJKLMN
	"---", ".--.", "--.-", ".-.", "...", "-", "..-", // OPQRSTU
	"...-", ".--", "-..-", "-.--", "--..", "  " };   // VWXYZ

string morse_digit[10] = { // ������ �𽺺�ȣ(0~9)
	"-----", ".----", "..---", "...--", ".....",
	"-....", "--...", "----..", "----.", "-..-." };

/*
std::map<int, string> morse_etc = { // Ư�������� �𽺺�ȣ
	{'/', "-..-."},
	{'?', "..--.."},
	{',', "--..--"},
	{'.', ".-.-.-"},
	{'+', ".-.-"},
	{'=', " -...-"},
	{' ', " "}
};
*/

string morse_unknown = " "; //�� �� ���� ���ڴ� ? 

const string& char_to_morse(int ch) //�Է��� ���� or ���� �𽺷� ��ȯ
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
	//return morse_unknown; // �� �� ���� ��ȣ
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
	//���ڿ� -> ��

	cout << "Please enter the English text to convert to Morse code : " << endl;
	string text;
	getline(cin, text); //���ڸ� �Է¹���

	// ��ȯ
	string morse;
	for (auto ch : text)
	{
		morse += char_to_morse(ch);
		morse += '|';
	}

	// ���
	cout << morse << endl;

	// �� -> ���ڿ�

	// ��ȯ
	string result;
	stringstream ss(morse);
	while (ss >> text)
		result += morse_to_char(text);

	// ���
	cout << result << endl;
	return 0;
}
