#include <iostream>
using namespace std;

class Person {
private:
	//�������
	const char* name;
	int age;
public:
	//����Լ�
	//��ü�� ����(new)�Ǹ� �ڵ����� ����Ǵ� Ư���� �Լ�
	//������ �Լ� [constructor]
	//�Լ� ����� ��Ģ!
	Person(const char* name, int age) {
		cout << "Person ��ü ����!!!" << endl;
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

