#include <iostream>
#include <stdio.h>

#include <string>	//std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cI[10] = "aaa";
	printf("%s \n", cI);	//aaa
	

	string cppI = "aaa", cppJ = "aaa", cppk = "abc";
	printf("%s \n", cppI.c_str());	//aaa
	

}