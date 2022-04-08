#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>	//std::string 클래스 사용
using namespace std;

int main(void) {
	char cI[] = "aaa", cJ[] = "aaa", ck[] = "abc";
	printf("%d \n", strcmp(cI, cJ) == 0); // 같은 글자
	printf("%d \n", strcmp(cI, ck) < 0); // 사전순 aaa  -> abc

	string cppI = "aaa", cppJ = "aaa", cppk = "abc";
	cout << (cppI == cppJ) << endl;		//같은 글자
	cout << (cppI < cppk) << endl;		//

}