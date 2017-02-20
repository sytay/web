#include "nhanVien.h"
#include "NVBC.h"
#include "NVHD.h"
#include"conio.h"
int TongTien(NhanVien *nv[], int n);
void LuongMax(NhanVien *nv[], int n);
void main()
{
	int n;
	NhanVien *nv[50];
	cout<<"\nnhap so nhan vien:";cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"\n 1: nhan vien bien che"<<endl;
		cout<<"\n 2: nhan vien hop dong"<<endl;
		int chon;
		cout<<"\nnhap loai nhanvien:";cin>>chon;
		if(chon == 1)
		{
			nv[i] = new NVBC;
		}
		else
		{
			nv[i] =new NVHD;
		}
		nv[i]->Nhap();
	}
	cout<<"\nxuat nhanvien";
	for(int i=0; i<n; i++)
	{
		nv[i]->Xuat();
		cout<<"\ntien luong:"<<nv[i]->TinhTien();
	}

	cout<<"\n\ntong tien luong ma cong ty phai tra:"<<TongTien(nv, n);
	cout<<"\n\nnhan vien co luong lon nhat la:"<<endl;
	LuongMax(nv, n);
	getch();
}

int TongTien(NhanVien *nv[], int n)
{
	int Tong = 0;
	for(int i=0; i<n; i++)
	{
		Tong += nv[i]->TinhTien();
	}
	return Tong;
}

void LuongMax(NhanVien *nv[], int n)
{
	int vt=0;
	int Max=nv[0]->TinhTien();
	for(int i=0; i<n; i++)
	{
		if(Max < nv[i]->TinhTien())
		{
			Max = nv[i]->TinhTien();
			vt = i;
		}
		if(Max == nv[i]->TinhTien())
		{
			vt=vt;
		}
	}
	nv[vt]->Xuat();
	cout<<"\ntien luong:"<<nv[vt]->TinhTien();
}
