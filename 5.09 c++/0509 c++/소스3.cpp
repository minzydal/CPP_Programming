#include <iostream>
using namespace std;

class Shape {
public :
	Shape() {
		cout << "Shape 持失切\n";
	}
	virtual void draw() = 0;
	virtual ~Shape() {
		cout << "Shape destructor\n";
	}
};

class Rectangle : public Shape {
public :
	Rectangle() {
		cout << "Rectangle 持失切\n";
	}
	virtual void draw() {
		cout << "Rectangle draw\n";
	}
	virtual ~Rectangle() {
		cout << "Rectangle destructor\n";
		}
};

class Triangle : public Shape {
public :
	Triangle() {
		cout << "Triangle 持失切\n";
	}
	virtual void draw() {
		cout << "Triangle draw\n";
	}
	virtual ~Triangle() {
		cout << "Triangle destruction\n";
		}
	};

class Circle : public Shape {
public:
	Circle() {
		cout << "Circle 持失切\n";
	}
	virtual void draw() {
		cout << "Circle draw\n";
	}
	virtual ~Circle() {
		cout << "Circle destruction\n";
	}
};

void main() {
	Shape *array[3];

	array[0] = new Rectangle();
	array[1] = new Triangle();
	array[2] = new Circle();

	for (int i = 0; i < 3; i++)
		array[i]->draw();
	for (int i = 0; i < 3; i++)
		delete array[];
	Shape shape;
	shape.test(array);
}