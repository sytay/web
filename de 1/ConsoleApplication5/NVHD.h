#ifndef NVHD_h
#define NVHD_h
#include "nhanvien.h"
class NVHD :
	public NhanVien
{
private:
	float m_fTienCong;
	int m_nSoGio;
public:
	NVHD(void);
	~NVHD(void);
	NVHD(string MaSo, string HoTen, int GT, int NamSinh, float TienCong, int SoGio );
	void Nhap();
	void Xuat();
	float TinhTien();
	
	
};

#endif