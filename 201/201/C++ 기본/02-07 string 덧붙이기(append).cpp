#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>	//std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cMunja[20];
	strcpy(cMunja, "c_insert");	//c_insert
	strcat(cMunja, "++");		//c_insert++
	printf("%s \n", cMunja);
	
	// ���ǻ��� "cpp_insert"+"++" �ϸ� �����߻�
	string cppMunja;
	cppMunja = "cpp_insert";	//cpp_insert
	cppMunja = cppMunja + "++"; //cpp_insert++
	cout << cppMunja << endl;
	return 0;
}