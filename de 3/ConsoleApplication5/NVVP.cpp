#include "NVVP.h"


NVVP::NVVP(void)
{
}


NVVP::~NVVP(void)
{
}

NVVP::NVVP(string MaNV, string HoTen, float MucLuong, float ThoiGianCT):NhanVien(MaNV, HoTen, MucLuong)
{
	m_fThoiGianCT = ThoiGianCT;
}

void NVVP::Nhap()
{
	NhanVien::Nhap();
	fflush(stdin);
	cout<<"nhap thoi gian cong tac:";cin>>m_fThoiGianCT;
}

void NVVP::Xuat()
{
	NhanVien::Xuat();
	cout<<"\nthoi gian cong tac:"<<m_fThoiGianCT;
}

int NVVP::TinhTienThuong()
{
	int Thuong;
	if(m_fThoiGianCT < 6)
	{
		Thuong = 100000; 
	}
	else
	{
		Thuong = 200000 + m_fMucLuong * 10/100 * (m_fThoiGianCT / 6);
	}
	return Thuong;
}