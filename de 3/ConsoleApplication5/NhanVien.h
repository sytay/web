#ifndef NhanVien_h
#define NhanVien_h
#include"iostream"
#include"string"
using namespace std;
class NhanVien
{
protected:
	string m_sMaNV, m_sHoTen;
	float m_fMucLuong;
public:
	NhanVien(void);
	~NhanVien(void);
	NhanVien(string MaNV, string HoTen, float MucLuong);
	virtual void Nhap();
	virtual void Xuat();
	virtual int TinhTienThuong()=0;
};

#endif
