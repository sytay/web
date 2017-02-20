#include "nvhd.h"


NVHD::NVHD(void)
{
}


NVHD::~NVHD(void)
{
}

NVHD::NVHD(string MaSo, string HoTen, int GT, int NamSinh, float TienCong, int SoGio ):NhanVien(MaSo,HoTen,GT,NamSinh)
{
	m_fTienCong = TienCong;
	m_nSoGio = SoGio;
}

void NVHD::Nhap()
{
	NhanVien::Nhap();
	cout<<"nhap tien cong:";cin>>m_fTienCong;
	cout<<"nhap so gio:";cin>>m_nSoGio;
}

void NVHD::Xuat()
{
	NhanVien::Xuat();
	fflush(stdin);
	cout<<"\ntien cong:"<<m_fTienCong;
	cout<<"\nso gio:"<<m_nSoGio;
}

float NVHD::TinhTien()
{
	return m_fTienCong * m_nSoGio;
}

//int  NVHD::Thuong(int n, NhanVien *nv[])
//{
//	int max = 0;
//	for(int i=0;i<n; i++)
//	{
//		if(nv[i]->Nhap > max)
//		{
//			max =0;
//		}
//	}
//}