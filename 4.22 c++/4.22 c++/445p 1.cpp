#include <iostream>
using namespace std;

class Plane {
	int id;
	char *model;
public:
	Plane() {
		id = 0;
		model = new char[strlen("No model") + 1];
		strcpy_s(model, strlen("No model") + 1, "No model");
	}
	Plane(int aid, char *m) {
		id = aid; // 초기화
		model = new char[strlen(m) + 1];
		strcpy(model, m);
	};

	Plane(const Plane &obj) {
		id = obj.id;
		model = new char[strlen(model) + 1];
		strcpy(model, obj.model);
	}

	~Plane() {
		cout << "소멸자 호출\n";
		delete[] model;
	}
	int setID() {

	}

	int getID() {
		return id;
	}

	void setModel(char *m) {
		delete[] model;
		model = new char[strlen(m) + 1];
		strcpy(model, m);
	}

	char *getModel() {
		return model;
	}

	void print() {
		cout << "ID : " << id << endl;
		cout << "Model : " << model << endl;
	}
};
void main() {
	Plane p1(1234, "Airbus 380");

	Plane p2(p1);
	p2.print();
	p1.setModel("Boeing 747");

	p1.print();
	p2.print();
	cout << p1.getModel() << endl;
}