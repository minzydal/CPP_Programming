#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int FACES = 7;

int main(void) {
	int freq[FACES] = { 0 };
	int i;
	int start, end;

	start = clock();
	srand(time(NULL));
	for (i = 0; i < 10000000; i++)                            ��                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
		freq[1 + rand() % 6] ++; //1~6���� ����
	cout << "�� ��\n";
	for (i = 1; i < FACES; i++)
		cout << i << " " << freq[i] << endl;
	end = clock();

	cout << "\n" <<(double)(end - start) / CLOCKS_PER_SEC  << "��" << endl << endl;

}