#include <iostream> //cout, endl ���
#include <string.h>
using namespace std;

class Person { //���� Ŭ����
private:
	string sName;
protected:
	int nAge;

public:
	Person();
	Person(string name, int age);
	void hi();
};
class Student :public Person {
private:
	int nHakbun;
public:
	void study();
};





Person::Person(){
	sName = "�͸�";
	nAge = 0;
} 

Person::Person(string name, int age)
	:sName(name), nAge(age) {

}



void Person::hi() {
	cout << "�̸�: " << sName << "����: " << nAge << endl;

}

class Student : public Person {
	int nHakbun;
public: //ȣ���� ����
	Student();
	Student(string name, int age, int Hakbun);
	void study();
};

Student::Student(string name, int age, int hakbun)
	: Person(name, age), nHakbun(hakbun) {}


Student::Student() : Person() { 
	nHakbun = 0;
}

void Student::study() {
	hi();
	cout << "�й�: " << nHakbun;
	nAge = 100;
}
 
int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("������", 2100);
	person->hi();

	Person* people = new Person[5];
	people[0].hi();
	

	delete person;
	delete[] people;


//�߸��� �κ� �����ϱ�

	class CBox {
	private:						//
		double width;

	};

	class ChildBox : CBox {
	public:
		void setWidth(double w) { 
			width = w;				//private ���� �Ұ�
		}
	};


}

class CBox {
public: //�Ǵ� proteced
	double width;

};

class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;				
	}
};

class CBox {
private:
	double width;

};

class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;			//getset���� �ٲپ� �ֱ�
	}
};


//private: Ŭ���� ���ο����� ���� �����ϸ� Ŭ���� �ܺο����� ������ �� �����Ƿ� ����� ������
// //Ŭ���� ������ �� ����Ʈ 
//protected: Ŭ������ ����, ��� ���迡 �ִ� Ŭ���������� ������ �� �ִ�.
//public: ��𼭵� �����Ӱ� ������ �� ������ �ܺο��� 
//���� ����� ������ �� �����Ƿ� ������ ������ ���̸� �� �ȴ�.



