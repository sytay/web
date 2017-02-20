#ifndef NVBH_h
#define NVBH_h
#include "nhanvien.h"
class NVBH :
	public NhanVien
{
private:
	float m_nSoSP;
public:
	NVBH(void);
	~NVBH(void);
	NVBH(string MaNV, string HoTen, float MucLuong, int SoSP);
	void Nhap();
	void Xuat();
	int TinhTienThuong();
};

#endif
