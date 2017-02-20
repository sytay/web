#ifndef Cxe_h
#define Cxe_h
class Cxe
{
protected:
	char MaLoai[10], HoTen[10];
	int SoGio;
public:
	virtual void nhap();
	virtual void xuat();
	Cxe();
	Cxe(char m[10],char t[10],int s);
	virtual int TinhTien()=0;
};
#endif