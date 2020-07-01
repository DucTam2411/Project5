#pragma once
#include <iostream>
#include<fstream>
using namespace std;
class CMatrix
{
	int n;
	int** a;
public:
	CMatrix();
	CMatrix(int x);
	void nhap();
	void xuat();
	int tongPhanTu();
	int operator ! ();
	CMatrix tongMaTran(CMatrix b);
	CMatrix operator + (CMatrix b);
};

