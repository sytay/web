#include "DIALUP.h"


DIALUP::DIALUP(void)
{
}


DIALUP::~DIALUP(void)
{
}

DIALUP::DIALUP(string MaThueBao, string TenKH, float Tien, float ThoiGianTC):ThueBao(MaThueBao, TenKH, Tien)
{
	m_fThoigianTC = ThoiGianTC;
}

void DIALUP::Nhap()
{
	ThueBao::Nhap();
	cout<<"nhap thoi gian truy cap:";cin>>m_fThoigianTC;
}

void DIALUP::Xuat()
{
	ThueBao::Xuat();
	cout<<"\nthoi gian truy cap:"<<m_fThoigianTC;
}

int DIALUP::TinhTien()
{
	return m_fTien + m_fThoigianTC * 30;
}