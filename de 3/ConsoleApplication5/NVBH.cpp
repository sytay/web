#include "NVBH.h"


NVBH::NVBH(void)
{
}


NVBH::~NVBH(void)
{
}

NVBH::NVBH(string MaNV, string HoTen, float MucLuong, int SoSP):NhanVien(MaNV, HoTen, MucLuong)
{
	m_nSoSP = SoSP;
}

void NVBH::Nhap()
{
	NhanVien::Nhap();
	fflush(stdin);
	cout<<"nhap tong so san pham:";cin>>m_nSoSP;
}

void NVBH::Xuat()
{
	NhanVien::Xuat();
	cout<<"\ntong so san pham:"<<m_nSoSP;
}

int NVBH::TinhTienThuong()
{
	return m_nSoSP * 20000;
}