#include "NhanVien.h"
#include "NVVP.h"
#include "NVBH.h"
#include "conio.h"
void NhapNV(NhanVien *nv[], int n);
void XuatNV(NhanVien *nv[], int n);
int TongTienThuong(NhanVien *nv[], int n);
void TimMax(NhanVien *nv[], int n);
void main()
{
	int n;
	NhanVien *nv[50];
	cout<<"\nnhap so nhan vien:";cin>>n;
	NhapNV(nv, n);
	cout<<"\n xuat nhan vien:"<<endl;
	XuatNV(nv, n);
	cout<<"\n\ntong so tien thuong cong ty la:"<<TongTienThuong(nv, n);
	TimMax(nv, n);
	getch();
}

void NhapNV(NhanVien *nv[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n 1: nhan vien van phong:"<<endl;
		cout<<"\n 2: nhan vien ban hang:"<<endl;
		int Chon;
		cout<<"\nnhap loai nhan vien:";cin>>Chon;
		if(Chon == 1)
		{
			nv[i] = new NVVP;
		}
		if(Chon == 2)
		{
			nv[i] = new NVBH;
		}

		nv[i]->Nhap();
	}
}

void XuatNV(NhanVien *nv[], int n)
{
	for(int i=0; i<n; i++)
	{
		nv[i]->Xuat();
		cout<<"\ntien thuong:"<<nv[i]->TinhTienThuong()<<endl;
	}
}

int TongTienThuong(NhanVien *nv[], int n)
{
	int Tong = 0;
	for(int i=0; i<n; i++)
	{
		Tong +=nv[i]->TinhTienThuong(); 
	}
	return Tong;
}

void TimMax(NhanVien *nv[], int n)
{
	int Max = nv[0]->TinhTienThuong(), vt;
	for(int i=0; i<n; i++)
	{
		if(Max <= nv[i]->TinhTienThuong())
		{
			Max = nv[i]->TinhTienThuong();
			vt = i;
		}
	}
	nv[vt]->Xuat();
	cout<<"\ntien thuong:"<<nv[vt]->TinhTienThuong()<<endl;
}
