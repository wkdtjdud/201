#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>	//std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cI[10] = "aaa";
	printf("%d \n", strlen(cI));	//3

	string cppI = "aaa";
	cout << cppI.size() << endl;
	cout << cppI.length() << endl;	//size()�� ���� ���
	

}