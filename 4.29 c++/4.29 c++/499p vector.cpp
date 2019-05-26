#include <iostream>
using namespace std;

class Vector {
	double x, y;
public : 
	Vector(double ax = 0.0, double ay = 0.0) : x(ax), y(ay){
	}
	void display() {
		cout << x << ", " << y << endl;
	}
	Vector add(Vector v) {
		Vector vector;

		vector.x = x + v.x;
		vector.y = y + v.y;
		return vector;
	}
};
void main() {
	Vector v1(1, 2), v2(2, 3), v3;

	v3 = v1.add(v2);
	v3.display();
//	v3 = v1 + v2;	//Vector 클래스에 +연산자에 대한 정의가 없기 때문에 error
}