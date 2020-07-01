#include<iostream>
#include "CMatrix.h"
#include <fstream>

using namespace std;
int main(){
	
	CMatrix a,b,c;
	a.nhap();
	a.xuat();
	b.nhap();
	b.xuat();
	c = a + b;
	c.xuat();
}