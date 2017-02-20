#include "NhanVien.h"


NhanVien::NhanVien(void)
{
}


NhanVien::~NhanVien(void)
{
}

NhanVien::NhanVien(string MaNV, string HoTen, float MucLuong)
{
	m_sMaNV = MaNV;
	m_sHoTen = HoTen;
	m_fMucLuong = MucLuong;
}

void NhanVien::Nhap()
{
	fflush(stdin);
	cout<<"nhap ma nhan vien:";cin>>m_sMaNV;
	cout<<"nhap ho ten:";cin>>m_sHoTen ;
	fflush(stdin);
	cout<<"nhap muc luong:";cin>>m_fMucLuong ;
}

void NhanVien::Xuat()
{
	cout<<"\nma nhan vien:"<<m_sMaNV;
	cout<<"\nho ten:"<<m_sHoTen ;
	cout<<"\nmuc luong:"<<m_fMucLuong ;
}