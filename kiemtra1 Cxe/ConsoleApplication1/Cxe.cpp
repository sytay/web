#include"Cxe.h"
#include"iostream"
using namespace std;
Cxe::Cxe()
{
}
Cxe::Cxe(char m[10],char t[10],int s)
{
	MaLoai[10]=m[10];
	HoTen[10]=t[10];
	SoGio=s;
}
void Cxe::nhap()
{
	fflush(stdin);
	cout<<"\nnhap ma loai:";cin.getline(MaLoai,10);
	cout<<"\nnhap ho ten:";cin.getline(HoTen,10);
	fflush(stdin);
	cout<<"\nnhap so gio:";cin>>SoGio;
}
void Cxe::xuat()
{
	cout<<"\n\n ma loai:"<<MaLoai;
	cout<<"\n ho ten:"<<HoTen;
	cout<<"\n so gio:"<<SoGio;
}