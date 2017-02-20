#ifndef ThueBao_h
#define ThueBao_h
#include"string"
#include"iostream"
using namespace std;
class ThueBao
{
protected:
	string m_sMaThueBao, m_sTenkH;
	float m_fTien;
public:
	ThueBao(void);
	~ThueBao(void);
	ThueBao(string MaThueBao, string TenKH, float Tien);
	virtual void Nhap();
	virtual void Xuat();
	virtual int TinhTien()=0;
};

#endif
