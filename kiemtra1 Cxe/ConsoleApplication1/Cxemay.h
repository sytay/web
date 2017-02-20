#include"Cxe.h"
#ifndef Cxemay_h
#define Cxemay_h
class Cxemay:public Cxe
{
private:
	int LoaiXe;
	int BienSo;
public:
	void nhap();
	void xuat();
	int TinhTien();
	Cxemay();
	Cxemay(char m[10],char t[10],int s,int L,int B);
};
#endif