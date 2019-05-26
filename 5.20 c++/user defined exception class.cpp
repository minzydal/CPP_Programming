// 사용자 정의 예외 클라스

#include <iostream>
using namespace std;

class NoPersonException {	// 일반 클래스와 형식은 동일하다
	int person;
public :
	NoPersonException(int p = 0) : person(p) { //exception class 생성자
	}
	int get_person() {
		return person;
	}
};
void main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_persons = 0;

	try {
		cout << "피자 조각 수 입력 : ";
		cin >> pizza_slices;
		cout << "사람 수 입력 : ";
		cin >> persons;

		if (persons <= 0)
			throw NoPersonException(persons);
		// NoPersonException 생성자 호출하여 객체 전달

		slices_per_persons = pizza_slices / persons;
		cout << slices_per_persons << endl;
	}
	catch (NoPersonException e) {	//매개변수는 NoPersonException 객체
		cout << "사람이" << e.get_person() << "명 입니다\n";
	}
	//예외가 발생하건 하지 않건 다음 문장으로 진행한다.
	cout << "try, catch를 이용한 exception handling\n";
}