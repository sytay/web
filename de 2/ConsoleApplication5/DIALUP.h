#ifndef DIALUP_h
#define DIALUP_h
#include "thuebao.h"
class DIALUP :
	public ThueBao
{
private:
	float m_fThoigianTC;
public:
	DIALUP(void);
	~DIALUP(void);
	DIALUP(string MaThueBao, string TenKH, float Tien, float ThoiGianTC);
	void Nhap();
	void Xuat();
	int TinhTien();
};

#endif