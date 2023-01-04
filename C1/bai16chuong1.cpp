//chuong 1.bai16 quan ly mat hang
#include<iostream>
using namespace std;


struct MATHANG
{
	int mamathang;
	char ten[51];
	int soluong;
	int dongia;
	int soluongton;
	int tgbh;	
};

void xuat1MatHang(MATHANG x);
void xuatDSMatHang(MATHANG A[], int n);
void nhap1MatHang(MATHANG &x);
void nhapDSMatHang(MATHANG A[], int &n);
MATHANG timMatHangTonKhoNhieu(MATHANG A[], int n);
bool soSanh(int a, int b);
MATHANG timMatHangTonKhoIt(MATHANG A[],int n);
MATHANG timMatHangCoGiaCaoNhat(MATHANG A[], int n);
void danhSachMatHangBHTren12Thang(MATHANG A[], int n);
void sapXepTangDanSLTon(MATHANG A[], int n);
void doiCho(MATHANG &a, MATHANG &b);
int main()
{
	MATHANG A[100];
	int n;
	nhapDSMatHang(A,n);
	//xuatDSMatHang(A,n);
	MATHANG t = timMatHangTonKhoNhieu(A,n); 	//cau a
	xuat1MatHang(t);
	MATHANG y = timMatHangTonKhoIt(A,n);	//cau b
	xuat1MatHang(y);
	MATHANG m = timMatHangCoGiaCaoNhat(A,n);	//cau c
	xuat1MatHang(m);
	danhSachMatHangBHTren12Thang(A,n);			//cau d
	sapXepTangDanSLTon(A,n);
	xuatDSMatHang(A,n);
	return 0;
}
void doiCho(MATHANG &a, MATHANG &b)
{
	MATHANG t = a;
	a = b;
	b = t;
}
void sapXepTangDanSLTon(MATHANG A[], int n)
{
	for(int i = 0 ;i<n-1;i++)
		for(int j = i+1; j<n;j++)
			if(soSanh(A[i].soluongton,A[j].soluongton) == true)
				doiCho(A[i], A[j]);
}
void danhSachMatHangBHTren12Thang(MATHANG A[], int n)
{
	for(int i = 0; i<n;i++)
		if(A[i].tgbh > 12)
			xuat1MatHang(A[i]);
}

MATHANG timMatHangCoGiaCaoNhat(MATHANG A[], int n)
{
	int max = A[0].dongia;
	int vitri = 0;
	for(int i = 1; i<n;i++)
		if(soSanh(A[i].dongia,max) == true)
		{
			max = A[i].dongia;
			vitri = i;
		}
	return A[vitri];
}


MATHANG timMatHangTonKhoIt(MATHANG A[],int n)
{
	int min = A[0].soluongton;
	int vitri = 0;
	for(int i = 1; i<n;i++)
		if(soSanh(A[i].soluongton,min) == false)
		{
			min = A[i].soluongton;
			vitri = i;
		}
	return A[vitri];
}
MATHANG timMatHangTonKhoNhieu(MATHANG A[], int n)
{
	int max = A[0].soluongton;
	int vitri = 0;
	for(int i = 1; i<n;i++)
		if(soSanh(A[i].soluongton,max) == true)
		{
			max = A[i].soluongton;
			vitri = i;
		}
	return A[vitri];
				
}
bool soSanh(int a, int b)
{
	if(a>b)
		return true;
	return false;
}

void xuat1MatHang(MATHANG x)
{
	cout<<"-------------------------"<<endl;
	cout<<"Ma mat hang: "<<x.mamathang<<endl;
	cout<<"Ten mat hang: "<<x.ten<<endl;
	cout<<"So luong: "<<x.soluong<<endl;
	cout<<"Don gia: "<<x.dongia<<endl;
	cout<<"So luong ton: "<<x.soluongton<<endl;
	cout<<"Thoi gian bao hanh: "<<x.tgbh<<endl;
}

void xuatDSMatHang(MATHANG A[], int n)
{
	for(int i = 0; i<n; i++)
		xuat1MatHang(A[i]);
}
void nhap1MatHang(MATHANG &x)
{
	fflush(stdin);
	cout<<"Nhap ma mat hang: ";
	cin>>x.mamathang;
	fflush(stdin);
	cout<<"Nhap ten mat hang: ";
	cin.getline(x.ten,51);
	fflush(stdin);
	cout<<"Nhap so luong: ";
	cin>>x.soluong;
	fflush(stdin);
	cout<<"Nhap don gia: ";
	cin>>x.dongia;
	fflush(stdin);
	cout<<"Nhap so luong ton: ";
	cin>>x.soluongton;
	fflush(stdin);
	cout<<"Nhap thoi gian bao hanh: ";
	cin>>x.tgbh;
}

void nhapDSMatHang(MATHANG A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		nhap1MatHang(A[i]);
}