#include <iostream>
using namespace std;

int a = 3;

int& ra = a;
ra = 30;


int* pa = &a;
*pa = 30;