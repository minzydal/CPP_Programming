#include <iostream>
using namespace std;

class Vector {
	double x, y;
public : 
	Vector(double ax = 0.0, double ay = 0.0) : x(ax), y(ay){
	}
	// default = 연산자(compiler가 제공)
	Vector & operator = (const Vector &v) {	//vector 객체들에 대한 = 연산을 정의
		x = v.x;
		y = v.y;
		return *this;	// 대입 연산자는 반드시 변경된 객체 자체를 &로 리턴
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

/* == 연산자 오버로딩 추가
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