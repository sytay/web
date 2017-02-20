#include"string"
#include"iostream"
#include"conio.h"
using namespace std;
class nguoi
{
protected:
	string ht;
	int namsinh;
public:
	friend istream &operator >>(istream &is,  nguoi &n);
	friend ostream &operator <<(ostream &os,  const nguoi &n);
};
 istream &operator >>(istream &is, nguoi &n)
{
	fflush(stdin);
	cout<<" ho ten:";is>>n.ht;
	fflush(stdin);
	cout<<" nam sinh:";is>>n.namsinh;
	return  is;
}
ostream &operator <<(ostream &os, const nguoi &n)
{
	os<<"\nho ten:"<<n.ht;
	os<<"\nnam sinh:"<<n.namsinh<<endl;
	return os;
}
class giaovien:public nguoi
{
private:
	int sbaibao;
public:
	friend istream &operator >>(istream &is, giaovien &n);
	friend ostream &operator <<(ostream &os, const giaovien &n);
};
 istream &operator >>(istream &is, giaovien &n)
{
	
	/*nguoi  *temp = &n;
	is >> *temp;*/
	nguoi *n;
	is>> (nguoi)n;
	fflush(stdin);
	cout<<"so bai bao cao:";is>>n.sbaibao;
	return is;
}
ostream &operator <<(ostream &os,  const giaovien &n)
{
	os<<(nguoi)n;
	os<<"\nso bai bao cao:"<<n.sbaibao<<endl;
	return os;
}
void main()
{
	giaovien a;
	cin>>a;
	cout<<a;
	getch();
}