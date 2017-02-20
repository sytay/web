#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
struct toado
{
	int x,y;
};
void nhap(toado td[],int &n);
void xuat(toado td[],int n);
void khoangcach(toado td[],int n);
void dodai(toado td[],int n);
void KiemTra(toado td[],int n);
void main()
{
	toado td[10];
	int n;
	nhap(td,n);
	xuat(td,n);
	khoangcach(td,n);
	//dodai(td,n);
	KiemTra(td,n);
	getch();
}
void nhap(toado td[],int &n)
{
	cout<<"\nnhap so nut giao thong:";cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"nhap nut thu "<<i+1<<":"<<endl;
		cout<<"nhap x:";
		cin>>td[i].x;
		cout<<"\nnhap y:";
		cin>>td[i].y;
	}
}

void xuat(toado td[],int n)
{
	cout<<"\ncac nut giao thong da nhap la:"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"nut "<<i+1<<"("<<td[i].x<<","<<td[i].y<<")\n";
	}
}

void khoangcach(toado td[],int n)
{
	float  min, kq[10];
	int u;
	for(int i=0; i<n; i++)
	{
		if(i+1<n)
		{
			 kq[i] = sqrt(td[i+1].x * td[i+1].x + td[i+1].y * td[i+1].y);
		}
		
	}
	 min = kq[0];
	for(int i=0; i<n-1; i++)
	 {
			if(min >= kq[i])
			 {
				min=kq[i];
				 u = i+1;
			 }
	 }
	cout<<"\ndiem "<<u+1<<" la diem gan goc o(0,0) nhat va = "<<min;
}
void dodai(toado td[],int n)
{
	int kc[10];
	int max,u,tong=0;
	for(int i=0; i<n; i++)
	{
		if(i+1<n)
		{
			if(td[i].x==td[i+1].x)
			{
				kc[i]=abs(td[i].y-td[i+1].y);
			}
			if(td[i].y==td[i+1].y)
			{
				kc[i]=abs(td[i].x-td[i+1].x);
			}
			tong=tong + kc[i];
		}
	}
	cout<<"\ntong khoang cach la:"<<tong;
}

void KiemTra(toado td[],int n)
{
	double kq[50], dem = 0;
	for(int i=0; i<n-1; i++)
	{
		kq[i] = sqrt( (td[i].x - td[i+1].x) * (td[i].x - td[i+1].x) + (td[i].y - td[i+1].y) * (td[i].y - td[i+1].y));
	}
	for(int i=0; i<n-1; i++)
	{
		double kc = sqrt( (td[n-1].x - td[0].x) * (td[n-1].x - td[0].x) + (td[n-1].y - td[0].y) * (td[n-1].y - td[0].y));
		if(kc == kq[i])
		{
			dem++;
		}
	}
	if(dem == 3)
		{
			cout<<"\n4 diem tren la hinh thoi ";
		}
		else
		{
			cout<<"\n4 diem tren khong fai hinh thoi ";
		}
}