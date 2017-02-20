#include "NhanVien.h"


NhanVien::NhanVien(void)
{
}


NhanVien::~NhanVien(void)
{
}

NhanVien::NhanVien(string MaSo, string HoTen, int GT, int NamSinh )
{
	m_sMaSo = MaSo;
	m_sHoTen = HoTen;
	m_nGT = GT;
	m_nNamSinh = NamSinh;
}

void NhanVien::Nhap()
{
	fflush(stdin);
	cout<<"nhap ma so:";cin>>m_sMaSo;
	cout<<"nhap ho ten :";cin>>m_sHoTen;
	fflush(stdin);
	cout<<"nhap gioi tinh :";cin>>m_nGT;
	cout<<"nhap nam sinh:";cin>>m_nNamSinh;
}

void NhanVien::Xuat()
{
	cout<<"\n ma so:"<<m_sMaSo;
	cout<<"\n ho ten :"<<m_sHoTen;
	cout<<"\n gioi tinh :"<<m_nGT;
	cout<<"\n nam sinh:"<<m_nNamSinh;
}