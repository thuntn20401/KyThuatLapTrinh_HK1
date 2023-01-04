//chuong1: b11. quan ly sinh vien bang struct

#include<iostream>
using namespace std;

struct SINHVIEN
{
	int MSV;
	char ten[51];
	int namsinh;
	float t,l,h,dtb;	
};
void nhap1SV(SINHVIEN &x);
void nhapDanhSachSV(SINHVIEN A[], int &n);
void xuat1SV(SINHVIEN x);
void xuatDanhSachSV(SINHVIEN A[], int n);
void tinhDTB(SINHVIEN A[], int n);
SINHVIEN timSVDiemTBMax(SINHVIEN A[], int n);
void doiCho(SINHVIEN &x, SINHVIEN &y);
void sapXepTangDanDTB(SINHVIEN A[], int n);
void sapXepGiamDanDiemToan(SINHVIEN A[], int n);
void timSVDiemTBLonHon5VaCoMonKhongDuoi3(SINHVIEN A[], int n);
SINHVIEN timSVCoTuoiLonNhat(SINHVIEN A[], int n);
void lietKeTheoTen(SINHVIEN A[], int n, char ten[]);
int main()
{
	SINHVIEN A[100];
	int n; 
	nhapDanhSachSV(A,n);
	tinhDTB(A,n);
	xuatDanhSachSV(A,n);
	SINHVIEN tbmax = timSVDiemTBMax(A,n); //tim sinh vien co diem trung binh max
	xuat1SV(tbmax);
	sapXepTangDanDTB(A,n); // sap xep sinh vien co dtb tang dan
	xuatDanhSachSV(A,n);
	sapXepGiamDanDiemToan(A,n);
	xuatDanhSachSV(A,n);
	cout<<"-----------------------------------"<<endl;
	timSVDiemTBLonHon5VaCoMonKhongDuoi3(A,n);
	SINHVIEN t = timSVCoTuoiLonNhat(A,n);
	xuat1SV(t);
	char ten[51];
	fflush(stdin);
	cout<<"Nhap ten SV can liet ke: ";
	cin.getline(ten,51);
	lietKeTheoTen(A,n,ten);
	return 0;
}

void lietKeTheoTen(SINHVIEN A[], int n, char ten[])
{
	bool co = false;
	for(int i = 0; i<n; i++)
		if(strcmp(A[i].ten,ten) == 0)
		{
			xuat1SV(A[i]);
			co = true;
		}
	if(!co)
		cout<<"Khong tim thay!";
}

void timSVDiemTBLonHon5VaCoMonKhongDuoi3(SINHVIEN A[], int n)
{
	for(int i = 0; i<n; i++)
		if(A[i].dtb > 5 && A[i].t >=3 && A[i].l >= 3 && A[i].h >=3)
			xuat1SV(A[i]);
}

SINHVIEN timSVCoTuoiLonNhat(SINHVIEN A[], int n)
{
	int x = A[0].namsinh;
	int vitri = 0;
	for(int i = 0; i<n;i++)
		if(A[i].namsinh < x)
		{
			x = A[i].namsinh;
			vitri = i;
		}
	return A[vitri];
}


void sapXepGiamDanDiemToan(SINHVIEN A[], int n)
{
	for(int i = 0; i<n-1; i++)
		for(int j = i+1; j<n; j++)
			if(A[i].t<A[j].t)
				doiCho(A[i],A[j]);
}

void doiCho(SINHVIEN &x, SINHVIEN &y)
{
	SINHVIEN t = x;
	x = y;
	y = t;
}
void sapXepTangDanDTB(SINHVIEN A[], int n)
{
	for(int i = 0;i<n-1;i++)
		for(int j = i+1;j<n;j++)
			if(A[i].dtb>A[j].dtb)
				doiCho(A[i],A[j]);
				
}
SINHVIEN timSVDiemTBMax(SINHVIEN A[], int n)
{
	float max = A[0].dtb;
	int vitri = 0;
	for(int i = 0; i<n; i++)
		if(A[i].dtb>max)
		{
			max = A[i].dtb;
			vitri = i;
		}
	
	return A[vitri];
}

void tinhDTB(SINHVIEN A[], int n)
{
	for(int i = 0;i<n;i++)
		A[i].dtb = (A[i].t + A[i].l + A[i].h)/3;
}

void xuat1SV(SINHVIEN x)
{
	
	cout<<"Ma sv: "<<x.MSV<<endl;
	cout<<"Ten sv: "<<x.ten<<endl;
	cout<<"Nam sinh: "<<x.namsinh<<endl;
	cout<<"Diem toan: "<<x.t<<", ly: "<<x.l<<", hoa: "<<x.h<<", dtb: "<<x.dtb<<endl;
	
}
void xuatDanhSachSV(SINHVIEN A[], int n)
{
	cout<<"--------------------------------"<<endl;
	for(int i = 0;i<n;i++)
		xuat1SV(A[i]);
}
void nhap1SV(SINHVIEN &x)
{
	fflush(stdin);
	cout<<"Nhap ma sv: ";
	cin>>x.MSV;
	fflush(stdin);
	cout<<"Nhap ten: ";
	fflush(stdin);
	cin.getline(x.ten,51);
	cout<<"Nhap nam sinh: ";
	cin>>x.namsinh;
	cout<<"Nhap diem toan, ly, hoa: ";
	cin>>x.t>>x.l>>x.h;
	
}
void nhapDanhSachSV(SINHVIEN A[], int &n)
{
	cin>>n;
	for(int i = 0;i<n;i++)
		nhap1SV(A[i]);
}