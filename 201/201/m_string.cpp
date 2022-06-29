#include <iostream>
#include <cstring>

using namespace std;

class m_string
{
private:
	int _Mysize;
	char* _Myptr;
public:
	m_string(); //기본생성자
	m_string(const char* _str); //문자열로 하나 생성
	m_string(const m_string& _str); //복사
	~m_string(); //소멸
	m_string& operator= (const m_string& _str);// 대입
	int operator== (const m_string& _str); //비교
	m_string operator+(const m_string& _str); //덧셈

	friend ostream& operator<< (ostream& os, const m_string& _str);
	friend istream& operator>> (istream& is, m_string& _str);

	int size(); //문자글자수반환
	int length(); //
	int* c_str(); // 문자열의 시작주소 반환
};

int m_string::size() { //문자열길이
	return strlen(_Myptr);
}

int m_string::length() {
	return strlen(_Myptr);
}

int* m_string::c_str() { // 주소값
	int* adr = new int;

	adr = (int*)&_Myptr;

	return adr - 2;
}
m_string::m_string()
{
	_Mysize = 0;
	_Myptr = NULL;

}

m_string::m_string(const char* _str) //문자 복사
{
	_Mysize = strlen(_str) + 1;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, _str);

}

m_string::m_string(const m_string& _str) //객체 복사
{
	_Mysize = _str._Mysize;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, _str._Myptr);
}

m_string::~m_string()
{
	if (_Myptr != NULL) //메모리 누수 방지
		delete[]_Myptr;

}

m_string& m_string::operator= (const m_string& _str)
{
	if (_Myptr != NULL)
		delete[]_Myptr;
	_Mysize = _str._Mysize; // 객체에 접근하는 방법
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, _str._Myptr);
	return *this;
}


int m_string::operator== (const m_string& _str)
{
	return strcmp(_Myptr, _str._Myptr) ? -1 : 0;
}

m_string m_string::operator+ (const m_string& _str)
{
	char* temp = new char[_Mysize + _str._Mysize - 1];
	strcpy(temp, _Myptr);
	strcat(temp, _str._Myptr);

	m_string result(temp);
	delete[]temp;

	return result;
}


ostream& operator<< (ostream& os, const m_string& _str)
{
	os << _str._Myptr;
	return os;
}

istream& operator>> (istream& is, m_string& _str)
{
	char str[100];
	is >> str;
	_str = m_string(str);
	return is;
}

int main(void) {
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;


	return 0;
}