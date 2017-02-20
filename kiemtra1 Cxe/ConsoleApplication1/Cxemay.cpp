#include"Cxemay.h"
#include"iostream"
using namespace std;
Cxemay::Cxemay()
{
}
Cxemay::Cxemay(char m[10],char t[10],int s,int L,int B):Cxe( m,t,s)
{
	LoaiXe=L;
	BienSo=B;
}
void Cxemay::nhap()
{
	Cxe::nhap();
 tt:cout<<"\nnhap loai xe:";cin>>LoaiXe;
	if(LoaiXe!=100 && LoaiXe!=250)
	{
		goto tt;
	}
	cout<<"\nnhap bien so:";cin>>BienSo;
}
void Cxemay::xuat()
{
	Cxe::xuat();
	cout<<"\n loai xe:"<<LoaiXe;
	cout<<"\n bien so:"<<BienSo;
	cout<<"\n tien thue:"<<TinhTien();
}
int Cxemay::TinhTien()
{
	int Tien;
	if(LoaiXe==100)
	{
		Tien=SoGio*15000;
	}
	if(LoaiXe==250)
	{
		Tien=SoGio*20000;
	}
	return Tien;
}