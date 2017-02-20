#include "ThueBao.h"


ThueBao::ThueBao(void)
{
}


ThueBao::~ThueBao(void)
{
}

ThueBao::ThueBao(string MaThueBao, string TenKH, float Tien)
{
	m_sMaThueBao =MaThueBao;
	m_sTenkH =TenKH;
	m_fTien =Tien;
}

void ThueBao::Nhap()
{
	fflush(stdin);
	cout<<"nhap ma thue bao:";cin>>m_sMaThueBao;
	cout<<"nhap ten khach hang:";cin>>m_sTenkH;
	fflush(stdin);
	cout<<"nhap tien hang thang:";cin>>m_fTien;
}

void ThueBao::Xuat()
{
	cout<<"\nma thue bao:"<<m_sMaThueBao;
	cout<<"\nten khach hang:"<<m_sTenkH;
	cout<<"\ntien hang thang:"<<m_fTien;
}