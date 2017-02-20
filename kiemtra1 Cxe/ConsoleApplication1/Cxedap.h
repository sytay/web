#include"Cxe.h"
#ifndef Cxedap_h
#define Cxedap_h
class Cxedap: public Cxe
{
private:
	int MaXe;
	int TaiTrong;
public:
	void nhap();
	void xuat();
	int TinhTien();
	Cxedap();
	Cxedap(char m[10],char t[10],int s,int ma,int ta);
};
#endif