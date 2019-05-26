#include <iostream>
using namespace std;

class Vector {
	double x, y;
public : 
	Vector(double ax = 0.0, double ay = 0.0) : x(ax), y(ay){
	}
	// default = ������(compiler�� ����)
	Vector & operator = (const Vector &v) {	//vector ��ü�鿡 ���� = ������ ����
		x = v.x;
		y = v.y;
		return *this;	// ���� �����ڴ� �ݵ�� ����� ��ü ��ü�� &�� ����
	}

	void display() {
		cout << x << ", " << y << endl;
	}
	/*
	Vector operator-(Vector v) {
		Vector temp;

		temp.x = x - v.x;
		temp.y = y - v.y;
		return temp;
	}
};*/
void main() {
	Vector v1(1, 2), v2(2, 3), v3(-1, -1);

	v3 = v1;
	v3.display();
	v2 = v1 = v3;
	v1.display();
	v2.display();
	v3.display();
}

/* == ������ �����ε� �߰�
#include <iostream>
using namespace std;

class Vector {
	double x, y;
	public :
	vector(double ax = 0.0, double ay = 0.0) : x(ax), y(ay){
	}
	bool operator == (Vector &v){
		return x == v.x && y == v.y;
	}
	void display(){
		cout << x << "," << y << endl;
	}
};

*/