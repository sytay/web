#ifndef NVVP_h
#define NVVP_h
#include "nhanvien.h"
class NVVP :
	public NhanVien
{
private:
	float m_fThoiGianCT;
public:
	NVVP(void);
	~NVVP(void);
	NVVP(string MaNV, string HoTen, float MucLuong, float ThoiGianCT);
	void Nhap();
	void Xuat();
	int TinhTienThuong();
};

#endif