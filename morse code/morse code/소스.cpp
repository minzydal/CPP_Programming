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
	// ���ڿ� => ��
	//-----------------------------------------------

	cout << "�Ʒ��� ���� �ؽ�Ʈ�� �Է��ϼ���. �� ��ȣ�� �ٲߴϴ�." << endl;
	string temp;
	getline(cin, temp);

	// ��ȯ
	string morse;
	for (auto ch : temp)
	{
		morse += char_to_morse(ch);
		morse += ' ';
	}

	// ���
	cout << morse << endl;

	//-----------------------------------------------
	// �� => ���ڿ�
	//-----------------------------------------------

	// ��ȯ
	string result;
	stringstream ss(morse);
	while (ss >> temp)
		result += morse_to_char(temp);

	// ���
	cout << result << endl;
	return 0;
}
