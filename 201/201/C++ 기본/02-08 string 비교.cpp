#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>	//std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cI[] = "aaa", cJ[] = "aaa", ck[] = "abc";
	printf("%d \n", strcmp(cI, cJ) == 0); // ���� ����
	printf("%d \n", strcmp(cI, ck) < 0); // ������ aaa  -> abc

	string cppI = "aaa", cppJ = "aaa", cppk = "abc";
	cout << (cppI == cppJ) << endl;		//���� ����
	cout << (cppI < cppk) << endl;		//

}