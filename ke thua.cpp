

//#include "stdafx.h"
#include "conio.h"
#include "iostream"
using namespace std;
class nguoi
{
private:
	char ht[10];
	int namsinh;
public:
	void nhap();
	void xuat();
};
class sinhvien:public nguoi
{
private:
	float dtb;
public:
	void nhap_sv();
	void xuat_sv();
	int khenthuong();
};
class giaovien:public nguoi
{
private:
	int sbaibao;
public:
	void nhap_gv();
	void xuat_gv();
	int khenthuong();
};

void nguoi:: nhap()
{
	fflush(stdin);
	cout<<" ho ten:";cin.getline(ht,10);
	cout<<" nam sinh:";cin>>namsinh;
}
void nguoi::xuat()
{
	cout<<"\ho ten:"<<ht;
	cout<<"\nnam sinh:"<<namsinh<<endl;
}
void sinhvien::nhap_sv()
{
	fflush(stdin);
	cout<<"diem trung binh";cin>>dtb;
	nguoi::nhap();
}
void sinhvien::xuat_sv()
{

	cout<<"\ndien trung binh:"<<dtb<<endl;
	nguoi::xuat();
}
int sinhvien::khenthuong()
{
	if(dtb>=8)
	{
	return dtb;
	}else
	{
		return (0);
	}
}
void giaovien::nhap_gv()
{
	fflush(stdin);
	cout<<"so bai bao cao:";cin>>sbaibao;
	nguoi::nhap();
}
void giaovien::xuat_gv()
{
	cout<<"\nso bai bao cao:"<<sbaibao<<endl;
	nguoi::xuat();
}
int giaovien::khenthuong()
{
		return sbaibao>1;
}

void main()
{
	int n,m;
	
	sinhvien sv[10];
	giaovien gv[10];
	cout<<"\nnhap soluong sv";cin>>n;
	for(int i=1;i<=n;i++)
	{
	sv[i].nhap_sv();
	}
	for(int i=1;i<=n;i++)
	{
		if(sv[i].khenthuong())
		{
			sv[i].xuat_sv();
		}
	}
	cout<<"\nnhap so luong gv:";cin>>m;
	for(int i=1;i<=m;i++)
	{
		gv[i].nhap_gv();
	}
	for(int i=1;i<=m;i++)
	{
		if(gv[i].khenthuong())
		{
			gv[i].xuat_gv();
		}
	}
	getch();
}

