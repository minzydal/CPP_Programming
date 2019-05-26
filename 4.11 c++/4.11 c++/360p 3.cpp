/*
사각형을 나타내는 클래스 rectangle을 만들기
*/
#include <iostream>
using namespace std;

class Rectangle {
private : 
	int width, length; // 가로 세로 길이
public : 
	void set_width(int w){
		width = w;
	}
	int get_width() {
		return width;
	}
	void set_length(int l) {
		length = l;
	}
	int get_length() {
		return length;
	}
};
	void main() {
		Rectangle r1;

		r1.set_width(30);
		r1.set_length(40);
		cout << r1.get_width() << ", " << r1.get_length() << endl;
	}

