#include <iostream> //cout, endl 사용
#include <string.h>
using namespace std;

class Person { //수퍼 클래스
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
	sName = "익명";
	nAge = 0;
} 

Person::Person(string name, int age)
	:sName(name), nAge(age) {

}



void Person::hi() {
	cout << "이름: " << sName << "나이: " << nAge << endl;

}

class Student : public Person {
	int nHakbun;
public: //호출을 위해
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
	cout << "학번: " << nHakbun;
	nAge = 100;
}
 
int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("ㅇㅇㅇ", 2100);
	person->hi();

	Person* people = new Person[5];
	people[0].hi();
	

	delete person;
	delete[] people;


//잘못된 부분 수정하기

	class CBox {
	private:						//
		double width;

	};

	class ChildBox : CBox {
	public:
		void setWidth(double w) { 
			width = w;				//private 접근 불가
		}
	};


}

class CBox {
public: //또는 proteced
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
		width = w;			//getset으로 바꾸어 주기
	}
};


//private: 클래스 내부에서만 접근 가능하며 클래스 외부에서는 접근할 수 없으므로 운닉할 정보에
// //클래스 생성할 때 디폴트 
//protected: 클래스의 내부, 상속 관계에 있는 클래스에서만 접근할 수 있다.
//public: 어디서든 자유롭게 참조할 수 있으며 외부에서 
//직접 멤버를 조작할 수 있으므로 은닉할 정보에 붙이면 안 된다.



