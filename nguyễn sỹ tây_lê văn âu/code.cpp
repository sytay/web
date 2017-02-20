/*
nhom : nguyen sy tay ,le van au.
mo ta noi dung bai tap:
viet chuong trinh quan ly thong tin xe may gom: them, sua, xoa, tim kiem.
su dung bien cau truc va ham xu ly tap tin
*/

//khai bai thu vien
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#define max 30
using namespace std;

struct xemay
{
	char tenxe[max], noisx[max], sokhung[max];
	int dungtich, giamua;
	struct ngaythang
	{
		int ngay;
		int thang;
		int nam;
	};
	ngaythang nt;
};
void nhapdsxe(xemay mang[] , int &spt,int a); 
void indsxe(xemay mang[], int spt);
void ghifile(char *filename, xemay mang[], int spt);
void docfile(char *filename, xemay  mang[], int &spt);
void themxe(xemay mang[], int &spt,int a);
void suaxe(xemay mang[], int spt);
void xoaxe(char *filename, xemay  mang[], int spt);
void timxe(char *filenane, xemay  mang[], int spt);
void sapxep( xemay  mang[], int spt);
void main()
{
	xemay mang[max];
	xemay *xm = &mang[0];
	int spt,chon,a;
	do
	{
		printf("\n======== menu chon phuong thuc===========\n");
		printf("1: nhap danh sach \n");
		printf("2: in danh sach\n");
		printf("3: them xe vao\n");
		printf("4: sua thong tin xe\n");
		printf("5: xoa xe\n");
		printf("6: tim thong tin xe\n");
		printf("7:sap xep thu tu xe\n");
		printf("0: thoat chuong trinh\n");
		printf("===========================================\n");
		

		printf("\nnhap phuong thuc can chon:");
		scanf("%d",&chon);
		switch(chon)
		{
		case 1:
			printf("\nnhap so luong xe:");
	        scanf("%d", &spt);
			a=0;
			//nhap danh sach xe va ghi vao file
			nhapdsxe(mang, spt,a);
			ghifile("struc.txt", mang, spt);
			getch();
			break;
		case 2:
			// doc danh sach xe da duoc ghi va in ra thong tin
			docfile("struc.txt", mang, spt);
	        indsxe(mang, spt);
			getch();
			break;
		case 3:
			//them xe vao bang danh sach
			themxe(mang,spt,a);
			getch();
			break;
		case 4:
			// sua thong tin xe trong danh sach
			suaxe(mang, spt);
			getch();
			break;
		case 5:
			// xoa xe trong danh sach
			xoaxe("struc.txt", mang, spt);
			getch();
			break;
		case 6:
			//tim kiem xe trong danh sach
			timxe("structs.txt", mang, spt);
			getch();
			break;
		case 7:
			//sap xep theo ten
			sapxep(mang, spt);
			getch();
			break;
		case 0:
			printf("\nket thuc chuong trinh");
			break;
		default :printf("\nnhap sai ! nhap lai:");
		}

	}while(chon !=0);
	
	
	
	getch();
}
void nhapdsxe(xemay mang[] , int &spt,int a)
{
	xemay *xm = &mang[0];
	for(int i=a ; i<spt ; i++)
	{
		fflush(stdin);
		printf("\nnnhap ten xe thu %d:", i+1); gets((xm+i)->tenxe);
		printf( "nhap so khung:"); gets( (xm+i)->sokhung);
		fflush(stdin);
		printf( "nhap noi san xuat:"); gets((xm+i)->noisx);
		fflush(stdin);
		printf( "nhap dung tich cua xe (cm3):"); scanf("%d", &(xm+i)->dungtich) ;
		printf( "nhap gia mua:"); scanf("%d", &(xm+i)->giamua);
		printf( "nhap ngay/thang/nam mua xe:"); scanf("%d%d%d", &(xm+i)->nt.ngay , &(xm+i)->nt.thang , &(xm+i)->nt.nam) ;
		
	}
	
}
void indsxe(xemay mang[],int spt)
{
	xemay *xm = &mang[0];
	int tong=0;
	printf("\nbang thong tin xe may\n");
	printf(":==========:==========:==========:==========:==========:==========:==========:\n");
	printf(":  stt     :  ten xe  : so khung :  noi sx  :dung tich :  gia mua : ngay mua :\n");
	printf(":==========:==========:==========:==========:==========:==========:==========:\n");
	for(int i=0 ; i < spt ; i++)
	{
		printf(":%10d:%10s:%10s:%10s:%10d:%10d:%2d/%2d/%4d:\n",i+1,(xm+i)->tenxe, (xm+i)->sokhung , (xm+i)->noisx, (xm+i)->dungtich, (xm+i)->giamua, (xm+i)->nt.ngay, (xm+i)->nt.thang, (xm+i)->nt.nam);
		printf(":----------:----------:----------:----------:----------:----------:----------:\n");
		tong =tong+(xm+i)->giamua;
		
	}
	printf("\t\ttong tien==== %d\n",tong);
	printf(":----------:----------:----------:----------:----------:----------:----------:\n");

}
 void ghifile(char *filename, xemay mang[], int spt)
 {
	 FILE *f;
	 f=fopen(filename, "w");//mo file de ghi
	 fwrite(&spt, sizeof(int ), 1, f);// ghi so xe vao file
	 for(int i=0 ; i<spt; i++)
	  {
		fwrite(&mang[i], sizeof(xemay), 1, f);//ghi tung xe vao file
	  }
	fclose(f);//dong file

 }
 void docfile(char *filename, xemay mang[], int &spt)
 {
	 FILE *f;
	 f=fopen(filename, "r");//mo file de doc
	 fread(&spt, sizeof(int), 1, f);//doc so xe da ghi trong file
	 for(int i=0; i<spt; i++)
	  {
		  fread(&mang[i], sizeof(xemay),1,f);//doc tung xe file
	  }
	 fclose(f);//dong file
 }
 void themxe(xemay mang[], int &spt, int a)
 {
	 int them;
	 printf ("\nnhap so xe can them:");
	scanf("%d",&them);
	a=spt;
	spt=spt+them;
	nhapdsxe(mang, spt,a);
	ghifile("struc.txt", mang, spt);
	printf("\nban da them thanh cong !!!\n");
 }
 void suaxe(xemay mang[], int spt)
 {
	 xemay *xm = &mang[0];
	 int tam=-1, chon;
	 char sua[max];
 tt: printf("\nnhap so khung xe can sua:");
	 fflush(stdin);
	 gets(sua);
	 for(int i=0; i < spt; i++)
	 {
		 if(strcmp((xm+i)->sokhung, sua)==0)
		 {
			 tam=i;
		 }
		  
	 }
	 if(tam == -1)
	 {
		printf("\nxe ban vua nhap khong co trong danh sach !!!\n");
		goto tt;
	 }
	 do
	 {
	 printf("\n-------menu sua thong tin--------- \n");
	 printf("1: sua ten xe\n");
	 printf("2: sua so khung\n");
	 printf("3: sua noi san xuat\n");
	 printf("4: sua dung tich xe\n");
	 printf("5: sua gia mua\n");
	 printf("0: thoat\n");
	 printf("------------------------------------ \n");

	 printf("\nnhap phuong thuc can chon:");
	 scanf("%d",&chon);
	 switch(chon)
	 {
	 case 1:
		 printf("nhap ten:");
		 fflush(stdin);
		 gets((xm+tam)->tenxe);
		 break;
	 case 2:
		 printf("nhap so khung:");
		  fflush(stdin);
		 gets((xm+tam)->sokhung);
		 break;
	 case 3:
		 printf("nhap noi san xuat:");
		  fflush(stdin);
		  gets((xm+tam)->noisx);
		  break;
	 case 4:
		 printf("nhap dung tich xe:");
		  fflush(stdin);
		  scanf("%d",&(xm+tam)->dungtich);
		   break;
	 case 5:
		 printf("nhap gia mua:");
		  fflush(stdin);
		 scanf("%d",&(xm+tam)->giamua);
	 case 0:
		 printf("\nhoan tat qua trinh chih sua\n");
		  break;
		 default :printf("\nnhap sai !!! nhap lai:");
	     
	  getch();
	 }
	 
	 ghifile("struc.txt", mang, spt);
	 }while(chon !=0);
 }
 void xoaxe(char *filename, xemay mang[], int spt)
 {
	  xemay *xm = &mang[0];
	 int tam = -1;
	 char xoa[max];
 tt: printf("\nnhap so khung xe can xoa:");
	 fflush(stdin);
	 gets(xoa);
	 for(int i=0; i<spt; i++)
	 {
		 if(strcmp((xm+i)->sokhung, xoa)==0)
		 {
			 tam=i;
		 }
	 }
	  if(tam == -1)
	 {
		printf("\nxe ban vua nhap khong co trong danh sach !!!\n");
		goto tt;
	 }
	 spt=spt-1;
	 FILE *f;
	 f=fopen(filename, "w");
	 fwrite(&spt, sizeof(int ), 1, f);
	 spt=spt+1;
	 for(int i=0 ; i<spt; i++)
	  {
		  if(i != tam)
		  {
		    fwrite(&mang[i], sizeof(xemay), 1, f);
		  }
	  }
	fclose(f);
	printf(" \nkhung  so %s da  duoc xoa thanh cong !!!\n",xoa);
 }
 void timxe( char  *filename, xemay mang[], int spt)
 {
	  xemay *xm = &mang[0];
	 int tam =-1;
	 char tim[max];
 tt: printf("\nnhap so khung xe can tim: ");
	  fflush(stdin);
	 gets(tim);
	  for(int i=0; i<spt; i++)
	 {
		 if(strcmp((xm+i)->sokhung, tim)==0)
		 {
			 tam=i;
		 }
	  }
	  if(tam == -1)
	 {
		printf("\nxe ban vua nhap khong co trong danh sach !!!\n");
		goto tt;
	 }
	   FILE *f;
	 f=fopen(filename, "w");
	 spt=1;
	 fwrite(&spt, sizeof(int ), 1, f);
	 fwrite(&mang[tam], sizeof(xemay), 1, f);
	fclose(f);
	docfile("structs.txt", mang, spt);
	indsxe(mang, spt);
 }
 void sapxep( xemay  mang[], int spt)
 {
	 xemay tam;
	 xemay *xm = &mang[0];
	 for(int i=0; i<spt;i++)
	 {
		 for(int j=i+1; j<spt; j++)
		 {
		   if(strcmp((xm+i)->tenxe,(xm+j)->tenxe) > 0)
		   {
			   tam = *(xm+i) ;
			   *(xm+i)=*(xm+j);
			   *(xm+j)=tam;
		   }
		 }
	 }
	  ghifile("struc.txt", mang, spt);
	  printf("\nthu tu xe da duoc sap xep a->z !!!\n");
 }