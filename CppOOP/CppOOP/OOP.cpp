#include <iostream>
using namespace std;

class Person {
private:
	//멤버변수
	const char* name;
	int age;
public:
	//멤버함수
	//객체가 생성(new)되면 자동으로 실행되는 특별한 함수
	//생성자 함수 [constructor]
	//함수 만드는 규칙!
	Person(const char* name, int age) {
		cout << "Person 객체 생성!!!" << endl;
		this->name = name;
		this->age = age;
		show();
	}

	void show() {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
		cout << endl;
	}
};

void main() {
	Person* p = new Person("sam", 20);

	Person* p2 = new Person("robin", 25);

	Person* p3 = new Person("hong", 30);
}

