// ��ӿ����� ������ �Ҹ� ����

#include <iostream>
using namespace std;

class Shape {
	int x, y;
public :
	Shape() {
		cout << "Shape ������\n";
	}
	~Shape() {
		cout << "Shape �Ҹ���\n";
	}
};
	class Rectangle : public Shape {
		int width, height;
	public:
		Rectangle() {	// child class �� �����ڴ� parent class�� �����ڸ� ���� ȣ���Ѵ�.
						// : Shape()�� ����Ʈ�� ȣ��
			cout << "Rectangle ������ \n";
	};
		~Rectangle() {	// �Ҹ��� ������ ����(������ ����ϱ� ����)
			cout << "Rectangle �Ҹ��� \n";
		}
};
	void main() {
		Rectangle r;
	}
	//�Ҹ��� ������ �������� ����ȴ�