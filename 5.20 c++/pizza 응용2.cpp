//함수에서 exception 처리 후 호출 함수에도 전달
#include <iostream>
using namespace std;

int dividePizza(int ps, int pe);

int main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_persons = 0;

	try {
		cout << "피자 조각 수 입력 : ";
		cin >> pizza_slices;
		cout << "사람 수 입력 : ";
		cin >> persons;

		if (persons == 0)
			throw persons;	//catch 블락에 매개변수로 persons 전달
		if (persons < 0)
			throw "negative";	//catch 블락에 매개변수로 문자열 전달
		slices_per_persons = dividePizza(pizza_slices, persons);
		cout << slices_per_persons << endl;
	}
	catch (int e) {	//매개변수로 int가 넘어 오는 경우
		cout << "사람이" << e << "명 입니다\n";
	}		
	catch (const char *e) {	//매개변수로 문자열이 넘어 오는 경우 // 문자열은 반드시 const로 받아줌
		cout << e << "exception 발생 \n";
	}
	catch (...) {
		cout << "Exception\n";
	}
	//예외가 발생하건 하지 않건 다음 문장으로 진행한다.
	cout << "try, catch를 이용한 exception handling\n";
}

int dividePizza(int ps, int pe) {
	try {
		if (pe == 0)
			throw pe;	//함수에서 자체적으로 예외 처리
		return ps / pe;
	}
	catch (int e) {
		cout << e << " : 분모는 0이 될 수 없음\n";
		throw;	//예외 처리 후 호출 함수에도 예외 전달
	}
}