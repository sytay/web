#ifndef NVBC_h
#define NVBC_h
#include "Nhanvien.h"
class NVBC :
	public NhanVien
{
private:
	float m_fLuongCoBan, m_fHeSoLuong, m_fPhuCap;
public:
	NVBC(void);
	~NVBC(void);
	NVBC(string MaSo, string HoTen, int GT, int NamSinh, float LuongcoBan, float HeSoLuong, float PhuCap );
	void Nhap();
	void Xuat();
	float TinhTien();
	
};

#endif
