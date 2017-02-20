#include"iostream"
#include"conio.h"
using namespace std;
void main()
{
	char s[50];
	cout<<"nhap chuoi:";
	gets(s);
	cout<<"\nxuat chuoi:";
	puts(s);
	for(int i=0; i<strlen(s); i++)
	{
		for(int j= i +1; j<strlen(s); j++)
		{
			if(s[i] == 'b' && s[j] == 'a')
			{
				int tam;
				tam = s[i];
				s[i] = s[j];
				s[j] = tam;
				break;
			}
		}
	}
	cout<<"\nchuoi sau khi sap xep: "<<s;
	getch();
}