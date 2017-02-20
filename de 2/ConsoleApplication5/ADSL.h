#ifndef ADSL_h
#define ADSL_h
#include "thuebao.h"
class ADSL :
	public ThueBao
{
private:
	float m_fDungLuong;
public:
	ADSL(void);
	~ADSL(void);
	ADSL(string MaThueBao, string TenKH, float Tien, float DungLuong);
	void Nhap();
	void Xuat();
	int TinhTien();
	
};

#endif