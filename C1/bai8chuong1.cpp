#include<iostream>
#include<math.h>
using namespace std;

struct DIEM
{
	int x,y;
};
void nhap(DIEM &a);
void xuat(DIEM b);
DIEM timDiemDXTungDo(DIEM a);
DIEM timDiemDXHoanhDo(DIEM a);
DIEM timToaDoTam(DIEM a);
float tinhKhoangCach(DIEM a, DIEM b);
void xuatKQ(float kq);
int main()
{
	DIEM a,b;
	nhap(a);
	nhap(b);
	DIEM t = timDiemDXTungDo(a);
	DIEM h = timDiemDXHoanhDo(a);
	//DIEM r = timToaDoTam(a);
	float kc = tinhKhoangCach(a,b);
	xuat(t);
	xuat(h);
	//xuat(r);
	xuatKQ(kc);
}
float tinhKhoangCach(DIEM a, DIEM b)
{
	float kc;
	kc = sqrt(float(a.x-b.x) * (a.x-b.x) + (a.y-b.y) * (a.y-b.y));
	return kc;
}

/*DIEM timToaDoTam(DIEM a)
{
	
}*/
DIEM timDiemDXHoanhDo(DIEM a)
{
	DIEM kq;
	kq.x = a.x;
	kq.y = -a.y;
	return kq;
}
DIEM timDiemDXTungDo(DIEM a)
{
	DIEM kq;
	kq.x = -a.x;
	kq.y = a.y;
	return kq;
	
}
void xuatKQ(float kq)
{
	cout<<kq;
}
void nhap(DIEM &a)
{
	cin>>a.x>>a.y;
}
void xuat(DIEM b)
{
	cout<<b.x<<";"<<b.y<<endl;
}