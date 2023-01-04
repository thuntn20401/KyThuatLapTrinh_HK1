#include <stdio.h>
struct Ngay
{
	int ngay;
	int thang;
	int nam;
};
//
int kiem_tra_hop_le (Ngay d);
void nhap_ngay (Ngay &d);
void xuat_ngay (Ngay d);
void nhap_k (int &k);
void xuat (int x);
int kiem_tra_nam_nhuan (int nam);
int kiem_tra_nam_vua_nhap (Ngay d);
int so_ngay_trong_thang (int thang, int nam);
int tinh_stt_trong_nam (Ngay d);
int tinh_stt_tu_ngay (Ngay d);
Ngay tim_ngay_truoc_do (Ngay d);
Ngay tim_ngay_sau_do (Ngay d);
Ngay tim_ngay_truoc_do_k_ngay (Ngay d, int k);
Ngay tim_ngay_sau_do_k_ngay (Ngay d, int k);
int tinh_khoang_cach_hai_ngay (Ngay d1, Ngay d2);
int so_sanh_hai_ngay  (Ngay d1, Ngay d2);
void xuat_so_sanh (int ss);
void xuat_kt (Ngay d, int kt);

//
int main () 
{
	Ngay d1, d2;
		printf ("nhap ngay 1: ");
	nhap_ngay (d1);
		printf ("ngay vua nhap: ");
	xuat_ngay (d1);
	int kt = kiem_tra_nam_vua_nhap (d1);
	xuat_kt (d1, kt);
	int kq1 = tinh_stt_trong_nam (d1);
		printf ("\nso thu tu cua ngay vua nhap trong nam: ");
	xuat (kq1);
	int kq2 = tinh_stt_tu_ngay (d1);
		printf ("\nso thu tu cua ngay vua nhap tu ngay 1/1/1: ");
	xuat (kq2);
	int k;
		printf ("\nnhap k: ");
	nhap_k (k);
	Ngay dt = tim_ngay_truoc_do_k_ngay (d1, k);
		printf ("ngay truoc do k ngay: ");
	xuat_ngay (dt);
	Ngay ds = tim_ngay_sau_do_k_ngay (d1, k);
		printf ("\nngay sau do k ngay: ");
	xuat_ngay (ds);
	printf ("\nnhap ngay 2: ");
	nhap_ngay (d2);
		printf ("ngay vua nhap: ");
	xuat_ngay (d2);
	int kc = tinh_khoang_cach_hai_ngay (d1, d2);
		printf ("\nkhoang cach giua 2 ngay: ");
	xuat (kc);
	int ss = so_sanh_hai_ngay (d1, d2);
	xuat_so_sanh (ss);
		printf ("\n");
}
// kiem tra ngay vua nhap co hop le
int kiem_tra_hop_le (Ngay d)
{
	int hl=1;
	if (d.nam < 0)
		hl=0;
	else 
		if (d.thang <1 || d.thang >12)
			hl=0;
		else
			if (d.ngay <1 || d.ngay > so_ngay_trong_thang (d.thang, d.nam))
				hl=0;
	return hl;
}
// nhap ngay
void nhap_ngay (Ngay &d)
{
	int hl;
	do
	{
		scanf ("%d%d%d", &d.ngay, &d.thang, &d.nam);
		hl = kiem_tra_hop_le(d);
		if (!hl)
			printf ("ngay vua nhap hkhong hop le. nhap lai: ");
		
	}
	while(!hl);
}
// xuat ra ngay vua nhap
void xuat_ngay (Ngay d)
{
	printf ("%d/%d/%d", d.ngay, d.thang, d.nam);
}
// nhap so k
void nhap_k (int &k)
{
	scanf ("%d", &k);
}
// xuat 
void xuat (int x)
{
	printf ("%d", x);
}
// kiem tra nam nhuan
int kiem_tra_nam_nhuan (int nam)
{
	if ((nam %4==0 && nam%100!=0) || (nam%400==0))
		return 1;
	else
		return 0;
}
int kiem_tra_nam_vua_nhap (Ngay d)
{
	int kt;
	if (kiem_tra_nam_nhuan(d.nam)==1)
		kt = 1;
	else
		kt = 0;
	return kt;
}
void xuat_kt (Ngay d, int kt)
{
	if (kt==1)
		printf ("\nnam vua nhap la nam nhuan");
	else
		printf ("\nnam vua nhap khong la nam nhuan");

}
// ttinh so ngay trong thang
int so_ngay_trong_thang (int thang, int nam)
{
	int sn;
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		sn=31;
		break;
	case 4: case 6: case 9: case 11:
		sn=30;
		break;
	case 2:
		if (kiem_tra_nam_nhuan(nam))
			sn=29;
		else 
			sn=28;
		break;
	default:
		sn=0;
	}
	return sn;
}
// tinh stt ngay vua nhap trong nam
int tinh_stt_trong_nam (Ngay d)
{
	int stt=0;
	for (int i=1; i<d.thang; i++)
		stt = stt + so_ngay_trong_thang(i, d.nam);
	stt = stt + d.ngay;
	return stt;
}
// tinh stt ngay vua nhap tu ngay 1/1/1
int tinh_stt_tu_ngay (Ngay d)
{
	int stt=0;
	for (int i=1; i<d.nam; i++)
		if (kiem_tra_nam_nhuan(i))
			stt= stt+366;
		else
		stt= stt+365;
	stt = stt+ tinh_stt_trong_nam (d);
	return stt;
}
// tim ngay truoc do 1 ngay
Ngay tim_ngay_truoc_do (Ngay d)
{
	Ngay kq=d;
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
			kq.ngay = so_ngay_trong_thang(kq.thang, kq.nam);
			
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
// tim ngay sau do 1 ngay
Ngay tim_ngay_sau_do (Ngay d)
{
	Ngay kq=d;
	int max = so_ngay_trong_thang (d.thang, d.nam);
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
// tim ngay truoc do k ngay
Ngay tim_ngay_truoc_do_k_ngay (Ngay d, int k)
{
	Ngay kq = d;
	for (int i=0; i<k; i++)
		kq = tim_ngay_truoc_do(kq);
	return kq;
}
// tim ngay sau do k ngay
Ngay tim_ngay_sau_do_k_ngay (Ngay d, int k)
{
	Ngay kq = d;
	for (int i=0; i<k; i++)
		kq = tim_ngay_sau_do(kq);
	return kq;
}
// tinh khoang cach giua 2 ngay
int tinh_khoang_cach_hai_ngay (Ngay d1, Ngay d2)
{
	int kc = tinh_stt_tu_ngay(d1) - tinh_stt_tu_ngay(d2);
	if (kc < 0)
		kc = (-1)*kc;
	return kc;
}
// so sanh hai ngay
int so_sanh_hai_ngay  (Ngay d1, Ngay d2)
{
	int a = tinh_stt_tu_ngay(d1);
	int b = tinh_stt_tu_ngay(d2);
	if (a==b) 
		return 0;
	else
		if (a>b) 
			return 1;
		else 
			return -1;	
	
}
void xuat_so_sanh (int ss)
{
 
	if(ss==1)
		printf ("\nngay thu nhat lon hon ngay thu hai");
	else
		if (ss==-1)
			printf ("\nngay thu hai lon hon ngay thu nhat");
		else
			printf ("\nhai ngay bang nhau");		
}


