#include <iostream>
#include <math.h>
using namespace std;

#define MAX 50

void nhapMang(int arr[], int spt, char doi);
void xuatMang(int arr[], int spt);
void sapXepTang(int arr[], int spt);
int demSoDiem(int arrA[], int arrB[], int spt);

void main()
{
	int a[MAX], b[MAX];
	int spt;
	cout << "nhap vao so luong thi sinh: ";
	cin >> spt;
	cout << "nhap thong so doi A:\n";
	nhapMang(a, spt, 'A');
	sapXepTang(a, spt);
	xuatMang(a, spt);
	cout << "nhap thong so doi B:\n";
	nhapMang(b, spt, 'B');
	sapXepTang(b, spt);
	xuatMang(b, spt);
	cout << "so tran thang lon nhat doi B co duoc: " << demSoDiem(a, b, spt);
}

void nhapMang(int arr[], int spt, char doi)
{
	cout << "nhap thong so cua doi " << doi << " :\n";
	for (int i = 0; i < spt; i++)
	{
		cout << doi << "[" << i << "] = ";
		cin >> arr[i];
	}
}

void xuatMang(int arr[], int spt)
{
	for (int i = 0; i < spt; i++)
	{
		cout << "\t" << arr[i];
	}
}

void sapXepTang(int arr[], int spt)
{
	for (int i = 0; i < spt-1; i++)
	{	
		for (int j = i + 1; j < spt; j++)
		{
			if (arr[i] > arr[j])
			{
				int tam = arr[i];
				arr[i] = arr[j];
				arr[j] = tam;
			}
		}
	}
}

int demSoDiem(int a[], int b[], int spt)
{
	int dem = 0;
	int i = 0;
	int j = 0;
	while (j < spt)
	{
		if (a[i] < b[j])
		{
			dem++;
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
	return dem;
}