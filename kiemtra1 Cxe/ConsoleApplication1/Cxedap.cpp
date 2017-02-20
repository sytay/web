#include"Cxedap.h"
#include"iostream"
using namespace std;
Cxedap::Cxedap()
{
}
Cxedap::Cxedap(char m[10],char t[10],int s,int ma,int ta):Cxe( m,t,s)
{
	MaXe=ma;
	TaiTrong=ta;
}
void Cxedap::nhap()
{
	Cxe::nhap();
	cout<<"\nnhap ma xe:";cin>>MaXe;
	cout<<"\nnhap tai trong:";cin>>TaiTrong;
}
void Cxedap::xuat()
{
	Cxe::xuat();
	cout<<"\n ma xe:"<<MaXe;
	cout<<"\n tai trong:"<<TaiTrong;
	cout<<"\n tien thue:"<<TinhTien();
}
int Cxedap::TinhTien()
{
	int Tien;
	if(SoGio ==1)
	{
		Tien=10000;
	}
	if(SoGio>1)
	{
		Tien=(SoGio-1)*8000 +10000;
	}
	return Tien;
}