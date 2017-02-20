#ifndef NhanVien_h
#define NhanVien_h
#include"string"
#include"iostream"
using namespace std;
class NhanVien
{
private:
	string m_sMaSo, m_sHoTen;
	int m_nGT, m_nNamSinh;
public:
	NhanVien(void);
	~NhanVien(void);
	NhanVien(string MaSo, string HoTen, int GT, int NamSinh );
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhTien()=0;
	
	
};

#endif
