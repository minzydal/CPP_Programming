#include <iostream>
using namespace std;

class Date {
	friend bool equals(Date, Date);
	int year, month, day;
public :
	Date(int y, int m, int d) : year(y), month(m), day(d) {
	}
	bool equals(Date date) {
		return year == date.year && month == date.month && day == date.day;
	}
};

bool equals(Date d1, Date d2) {	//friend�� ������ �����Լ�
	return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
}

void main() {
	Date d1(1960, 5, 23);
	Date d2(2019, 5, 11);
	cout << equals(d1, d2) << endl; //�����Լ� ���

	cout << d1.equals(d2) << endl;	//����Լ� ���
}

// cout << d1.equals(d2) << endl; //��� �Լ� ���

/* bool equals(Date date){
	return  year == date.year && month == date.month && day == date.day;
}
*/