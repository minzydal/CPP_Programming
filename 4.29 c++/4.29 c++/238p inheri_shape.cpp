// 상속에서의 생성과 소멸 순서

#include <iostream>
using namespace std;

class Shape {
	int x, y;
public :
	Shape() {
		cout << "Shape 생성자\n";
	}
	~Shape() {
		cout << "Shape 소멸자\n";
	}
};
	class Rectangle : public Shape {
		int width, height;
	public:
		Rectangle() {	// child class 의 생성자는 parent class의 생성자를 먼저 호출한다.
						// : Shape()을 디폴트로 호출
			cout << "Rectangle 생성자 \n";
	};
		~Rectangle() {	// 소멸은 생성과 역순(스택을 사용하기 때문)
			cout << "Rectangle 소멸자 \n";
		}
};
	void main() {
		Rectangle r;
	}
	//소멸은 생성의 역순으로 진행된다