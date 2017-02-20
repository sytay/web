#include "NVBC.h"


NVBC::NVBC(void)
{
}


NVBC::~NVBC(void)
{
}

NVBC::NVBC(string MaSo, string HoTen, int GT, int NamSinh, float LuongcoBan, float HeSoLuong, float PhuCap ):NhanVien(MaSo,HoTen,GT,NamSinh)
{
	m_fLuongCoBan = LuongcoBan;
	m_fHeSoLuong = HeSoLuong;
	m_fPhuCap = PhuCap;
}

void NVBC::Nhap()
{
	NhanVien::Nhap();
	cout<<"nhap luong co ban:";cin>>m_fLuongCoBan;
	cout<<"nhap he so luong:";cin>>m_fHeSoLuong;
	cout<<"nhap phu cap:";cin>>m_fPhuCap;
}

void NVBC::Xuat()
{
	NhanVien::Xuat();
	fflush(stdin);
	cout<<"\nluong co ban:"<<m_fLuongCoBan;
	cout<<"\nhe so luong:"<<m_fHeSoLuong;
	cout<<"\nphu cap:"<<m_fPhuCap;
}

float NVBC::TinhTien()
{
	return m_fLuongCoBan * m_fHeSoLuong + m_fPhuCap;
}

