#include "ThueBao.h"
#include "DIALUP.h"
#include "ADSL.h"
#include"conio.h"
void NhapThueBao(ThueBao *a[], int n);
void XuatThueBao(ThueBao *a[], int n);
float TinhTong(ThueBao *a[], int n);
void TimMin(ThueBao *a[], int n) ;
void main()
{
	int n;
	ThueBao *a[50];
	cout<<"nhap so thue bao:";cin>>n;
	NhapThueBao(a, n);
	cout<<"\nxuat thue bao";
	XuatThueBao(a, n);
	cout<<"\n\ntong tien cac thue bao la:"<<TinhTong(a, n);
	cout<<"\n\nthue bao it tien nat la:"<<endl;
	TimMin(a, n);
	getch();
}

void NhapThueBao(ThueBao *a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n 1: nhap thue bao DIALUP"<<endl;
		cout<<"\n 2: nhap thue bao ADSL"<<endl;
		int Chon;
		cout<<"\nnhap ten thue bao:";cin>>Chon;
		if(Chon == 1)
		{
			a[i] = new DIALUP ;
		}
		else
		{
			a[i] =new ADSL;
		}
		a[i]->Nhap();
	}
}

void XuatThueBao(ThueBao *a[], int n)
{
	for(int i=0; i<n; i++)
	{
		a[i]->Xuat();
		cout<<"\ntong tien khach hang phai tra la:"<<a[i]->TinhTien();
		cout<<"\n";
	}
}
float TinhTong(ThueBao *a[], int n)
{
	int Tong =0;
	for(int i=0; i<n; i++)
	{
		Tong +=a[i]->TinhTien();
	}
	return Tong;
}
void TimMin(ThueBao *a[], int n) 
{
	int VT;
	int Min = a[0]->TinhTien();
	for(int i=0; i<n; i++)
	{
		if(Min >= a[i]->TinhTien())
		{
			Min = a[i]->TinhTien();
			VT = i;
		}
	}
   a[VT]->Xuat();
   cout<<"tien la"<<a[VT]->TinhTien();
}