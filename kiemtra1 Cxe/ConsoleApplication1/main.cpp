#include"Cxe.h"
#include"Cxemay.h"
#include"Cxedap.h"
#include"iostream"
using namespace std;
#include"conio.h"
void NhapXe(Cxe *a[], int nxe);
void XuatXe(Cxe *a[], int nxe);
int TongTien(Cxe *a[], int nxe);
void TimMin(Cxe *a[], int nxe);
void main()
{
	Cxe *a[50];
	int nxe;
	cout<<"\nnhap so xe:";cin>>nxe;
    NhapXe(a, nxe);
	cout<<"\n xuat xe:"<<endl;
	XuatXe(a, nxe);
	cout<<"\n\n tong tien thue xe la:"<<TongTien(a, nxe);
	TimMin(a, nxe);
	getch();
}
void NhapXe(Cxe *a[], int nxe)
{
	
	for(int i=0; i<nxe; i++)
	{
		cout<<"\n====menu====="<<endl;
		cout<<"\n 1: xe dap"<<endl;
		cout<<"\n 2: xe may"<<endl;
		int chon;
		cout<<"\nnhap loai xe:";cin>>chon;
		if(chon==1)
		{
		    a[i] = new Cxedap;
		}
		if(chon==2)
		{
			a[i] =new Cxemay;
		}
		a[i]->nhap();
	}
}

void XuatXe(Cxe *a[], int nxe)
{
	for(int i=0; i<nxe; i++)
	{
		a[i]->xuat();
	}
}

int TongTien(Cxe *a[], int nxe)
{
	int tong = 0;
	for(int i = 0; i < nxe; i++)
	{
		tong += a[i]->TinhTien();
	}
	return tong;
}

void TimMin(Cxe *a[], int nxe)
{
	int Min = a[0]->TinhTien(), vt;
	for(int i = 0; i < nxe;i++)
	{
		if(Min >= a[i]->TinhTien())
		{
			Min = a[i]->TinhTien(); 
			vt = i;
		}
	}
	cout<<"\n\n Xe co so tien nho nhat la:";
	a[vt]->xuat();
}
