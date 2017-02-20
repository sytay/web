#include"iostream"
#include"conio.h"
using namespace std;
void Nhapmang(int a[], int &n);
void Xuatmang(int a[], int n);
void Ktdoixung(int a[], int n);
void tongmax(int a[], int n);
void inphantu(int a[], int n);
void main()
{
	int a[50],n;
	Nhapmang(a,n);
	cout<<"\nxuat mang: ";
	Xuatmang(a,n);
	//Ktdoixung(a,n);
	inphantu(a,n);
	getch();
}
void Nhapmang(int a[],int &n)
{
	cout << "\nnhap so phan tu:";cin >> n;
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void Xuatmang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
}
void Ktdoixung(int a[], int n)
{
	int dem=0,j=n-1;
	for(int i=0; i<n/2; i++)
	{
	   if(a[i]==a[j])
	    {
	    	dem++;
	    }
		j--;
	}
	cout<<dem;
	if(dem == n/2)
	{
		cout<<"\nmang a co tinh doi xung";
	}else
	{
		cout<<"\nmang a khong co tinh doi xung";
	}
}
void inphantu(int a[], int n)
{
	int max =0, vt;
	for(int i=0; i<n; i++)
	{
		int dem=0;
		for(int j=0; j<n;j++)
		{
		   if(a[i] == a[j])
		   {
		 	 dem++;
		   }
		  
		}
		if(max < dem)
		{
			max = dem;
			vt= a[i];
		}
	 
	}
	cout<<"\nso "<<vt<<" xuat hien nhieu nhat la "<<max<<" lan";
}

