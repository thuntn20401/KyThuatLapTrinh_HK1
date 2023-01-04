#include<iostream>
using namespace std;

struct DATE
{
	int ngay;
	int thang;
	int nam;
};

int tinhKhoangCachHaiNgay(DATE d1, DATE d2);
int tinhSTTNgayTrongNam(DATE d);
int tinhSTTTuNgayX(DATE d);
int kiemTraNamNhuan(int nam);
int soNgayTrongThang(int thang, int nam);
int kiemTraHopLe(DATE d);
void nhapSoK(int &k);
int kiemTraNamVuaNhap(DATE d);
void xuatSoSanh(int ss);
DATE timNgayTruocDoKNgay(DATE d, int k);
DATE timNgayTruocDo1Ngay(DATE d);
DATE timNgaySauDoKNgay(DATE d, int k);
DATE timNgaySauDo1Ngay(DATE d);
void xuatNgay(DATE d);
void nhapNgay(DATE &d);
void xuat(int kq);
int main()
{
	DATE d1,d2;
	int k;
	
	cout<<"Nhap ngay thu nhat: ";
	nhapNgay(d1);
	cout<<"Ngay vua nhap: ";
	xuatNgay(d1);
	int t = tinhSTTNgayTrongNam(d1);
	cout<<"So thu tu ngay vua nhap trong nam la: "<<t<<endl;
	int t1 = tinhSTTTuNgayX(d1);
	cout<<"So thu tu cua ngay vua nhap tu ngay 1/1/1: "<<t1<<endl;
	
	cout<<"Nhap so K: ";
	nhapSoK(k);
	DATE dt = timNgayTruocDoKNgay(d1,k);
	cout<<"Ngay truoc do k ngay la: ";
	xuatNgay(dt);
	
	cout<<"Nhap ngay thu 2: ";
	nhapNgay(d2);
	cout<<"Ngay vua nhap: ";
	xuatNgay(d2);
	cout<<"Khoang cach giua 2 ngay: ";
	int kc = tinhKhoangCachHaiNgay(d1,d2);
	xuat(kc);
}
int tinhKhoangCachHaiNgay(DATE d1, DATE d2)
{
	int kc = tinhSTTTuNgayX(d1) - tinhSTTTuNgayX(d2);
	if (kc < 0)
		kc = (-1)*kc;
	return kc;
}
//tinh so thu tu ngay trong nam
int tinhSTTNgayTrongNam(DATE d)
{
	int stt=0;
	for (int i=1; i<d.thang; i++)
		stt = stt + soNgayTrongThang(i, d.nam);
	stt = stt + d.ngay;
	return stt;
}
// tim ngay truoc do k ngay
DATE timNgayTruocDoKNgay(DATE d, int k)
{
	DATE kq = d;
	for (int i=0; i<k; i++)
		kq = timNgayTruocDo1Ngay(kq);
	return kq;
}
// tim ngay truoc do 1 ngay
DATE timNgayTruocDo1Ngay(DATE d)
{
	DATE kq=d;
	if (d.ngay ==1)
	{
		if (d.thang ==1)
		{
			kq.ngay =31;
			kq.thang = 12;
			kq.nam = d.nam -1;
		}
		else 
		{
			kq.thang = d.thang -1;
			kq.nam = d.nam;
			kq.ngay = soNgayTrongThang(kq.thang, kq.nam);
			
		}

	}
	else 
	{
		kq.ngay = d.ngay -1;
		kq.thang = d.thang;
		kq.nam = d.nam;
	}
	return kq;

}
//tim ngay sau do k ngay
DATE timNgaySauDoKNgay(DATE d, int k)
{
	DATE kq = d;
	for (int i=0; i<k; i++)
		kq = timNgaySauDo1Ngay(kq);
	return kq;
}
//tim ngay sau do 1 ngay
DATE timNgaySauDo1Ngay(DATE d)
{
	DATE kq=d;
	int max = soNgayTrongThang(d.thang, d.nam);
	if (d.ngay ==max)
	{
		if (d.thang ==12)
		{
			kq.ngay =1;
			kq.thang = 1;
			kq.nam = d.nam +1;
		}
		else 
		{
			kq.ngay = 1;
			kq.thang = d.thang +1 ;
			kq.nam = d.nam;
		}

	}
	else 
	{
		kq.ngay = d.ngay +1;
		kq.thang = d.thang;
		kq.nam = d.nam;
	}
	return kq;
}
//so sanh 2 ngay vua nhap
int soSanhHaiNgay(DATE d1, DATE d2)
{
	int a = tinhSTTTuNgayX(d1);
	int b = tinhSTTTuNgayX(d2);
	if (a==b) 
		return 0;
	else
		if (a>b) 
			return 1;
		else 
			return -1;	
}
void xuatSoSanh(int ss)
{
	if(ss==1)
		cout<<"Ngay thu nhat lon hon ngay thu 2";
	else
		if (ss==-1)
			cout<<"Ngay thu 2 lon hon ngay thu nhat";
		else
			cout<<"Hai ngay bang nhau";
}
// tinh stt ngay vua nhap tu ngay 1/1/1
int tinhSTTTuNgayX(DATE d)
{
	int stt=0;
	for (int i=1; i<d.nam; i++)
		if (kiemTraNamNhuan(i))
			stt= stt+366;
		else
		stt= stt+365;
	stt = stt+ tinhSTTNgayTrongNam(d);
	return stt;
}
//kiem tra nam nhuan
int kiemTraNamNhuan(int nam)
{
	if ((nam %4==0 && nam%100!=0) || (nam%400==0))
		return 1;
	else
		return 0;
}
//kiem tra nam vua nhap vao co phai nam nhuan khong
int kiemTraNamVuaNhap(DATE d)
{
	int kt;
	if(kiemTraNamNhuan(d.nam) == 1)
		return 1;
	else
		return 0;
	return kt;
}
//dem so ngay trong thang
int soNgayTrongThang(int thang, int nam)
{
	int songay;
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		songay=31;
		break;
	case 4: case 6: case 9: case 11:
		songay=30;
		break;
	case 2:
		if (kiemTraNamNhuan(nam))
			songay=29;
		else 
			songay=28;
		break;
	default:
		songay=0;
	}
	return songay;
}
//kiem tra ngay nhap vao co hop le hay khong
int kiemTraHopLe(DATE d)
{
	int hople = 1;
	if (d.nam < 0)
		hople=0;
	else 
		if (d.thang <1 || d.thang >12)
			hople=0;
		else
			if (d.ngay <1 || d.ngay > soNgayTrongThang(d.thang, d.nam))
				hople=0;
	return hople;
}
//xuat ket qua
void xuat(int kq)
{
	cout<<kq;
}
//nhap vao so k
void nhapSoK(int &k)
{
	cin>>k;
}
//nhap ngay thang nam
void nhapNgay(DATE &d)
{
	int hople;
	do
	{
		cin>>d.ngay>>d.thang>>d.nam;
		hople = kiemTraHopLe(d);
		if (!hople)
			cout<<"Ngay vua nhap khong hop le. Nhap lai";
	}
	while(!hople);
}
void xuatNgay(DATE d)
{
	cout<<d.ngay<<" "<<d.thang<<" "<<d.nam<<endl;
}