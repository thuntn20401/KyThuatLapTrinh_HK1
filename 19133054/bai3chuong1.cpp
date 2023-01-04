#include<iostream>
using namespace std;

struct THOIGIAN
{
	int h,p,g;
};
void nhapThoiGian(THOIGIAN &t);
void xuatThoiGian(THOIGIAN t);
bool kiemTraHopLe(THOIGIAN x, THOIGIAN y);
THOIGIAN doiGiaySangThoiGian(int x);
int doiThoiGianSangGiay(THOIGIAN x);
THOIGIAN tinhKhoangCach2MocThoiGian(THOIGIAN t1, THOIGIAN t2);
int main()
{
	THOIGIAN t1,t2;
	nhapThoiGian(t1);
	nhapThoiGian(t2);
	//xuatThoiGian(t1);
	//xuatThoiGian(t2);
	//bool co1 = kiemTraHopLe(t1);
	//bool co2 = kiemTraHopLe(t2);
	THOIGIAN kq = tinhKhoangCach2MocThoiGian(t1,t2);
	xuatThoiGian(kq);
}
THOIGIAN doiGiaySangThoiGian(int x)
{
	THOIGIAN y;
	y.h = x/3600;
	y.p = (x%3600)/60;
	y.g = x % 3600 % 60;
	return y;
}
int doiThoiGianSangGiay(THOIGIAN x)
{
	int kq = x.h*3600 + x.p*60 + x.g;
	return kq;
}
THOIGIAN tinhKhoangCach2MocThoiGian(THOIGIAN t1, THOIGIAN t2)
{
	if(kiemTraHopLe(t1,t2))
	{
		int giay1 = doiThoiGianSangGiay(t1);
		int giay2 = doiThoiGianSangGiay(t2);
		int kq = abs(giay1 - giay2);
		THOIGIAN d = doiGiaySangThoiGian(kq);
		return d;
	}
	return t1;
}
bool kiemTraHopLe(THOIGIAN x, THOIGIAN y)
{
	if(x.h>=0 && x.h<24 && x.p>=0 && x.p<60 && x.g>=0 && x.g<60 && y.h>=0 && y.h<24 && y.p>=0 && y.p<60 && y.g>=0 && y.g<60)
		return true;
	else
		return false;
}
void nhapThoiGian(THOIGIAN &t)
{
	cin>>t.h>>t.p>>t.g;
}
void xuatThoiGian(THOIGIAN t)
{
	cout<<t.h<<"h"<<t.p<<"p"<<t.g<<"s"<<endl;
}