/*���丮��
for���� �̿��Ͽ� factorial���� ����ϴ� ���α׷�
while��
*/

#include <iostream>
using namespace std;

int main(void) {

	int fact = 1;
	int n;

	cout << "���� �Է� : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		fact *= i;
		cout << i << "!�� " << fact << "�Դϴ�.\n";
	}
}