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
// ���鿡 ���� ����

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
	// ���ڿ� => ��

	cout << "Please enter the text in English to convert to morse code." << endl;
	string text; //���� �Է��� ���ڿ�
	getline(cin, text); //getline 

	// ��ȯ
	string morse;
	for (auto ch : text)
	{
		morse += char_to_morse(ch);
		morse += ' ';
	}

	// ���
	cout << morse << endl;

	// �� => ���ڿ�

	// ��ȯ
	string result;
	stringstream ss(morse);
	while (ss >> text)
		result += morse_to_char(text);

	// ���
	cout << result << endl;
	return 0;
}