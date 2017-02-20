#include "ADSL.h"


ADSL::ADSL(void)
{
}


ADSL::~ADSL(void)
{
}

ADSL::ADSL(string MaThueBao, string TenKH, float Tien, float DungLuong):ThueBao(MaThueBao, TenKH, Tien)
{
	m_fDungLuong = DungLuong;
}

void ADSL::Nhap()
{
	ThueBao::Nhap();
	cout<<"nhap dung luong:";cin>>m_fDungLuong;
}

void ADSL::Xuat()
{
	ThueBao::Xuat();
	cout<<"\ndung luong:"<<m_fDungLuong;
}

int ADSL::TinhTien()
{
	return m_fTien + m_fDungLuong * 50;
}