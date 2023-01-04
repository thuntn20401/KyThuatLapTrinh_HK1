//chuong1.bai12 phim VIDEO

#include<iostream>
#include<string.h>
using namespace std;

struct VIDEO
{
	char tenphim[51];
	char theloai[9];
	char tendaodien[21];
	char tennamchinh[21];
	char tennuchinh[21];
	int namsanxuat;
	char hangsanxuat[51];
};
void xuat1Phim(VIDEO x);
void xuatDanhSachPhim(VIDEO A[], int n);
void nhap1Phim(VIDEO &x);
void nhapDanhSachPhim(VIDEO A[], int &n);
void timThongTinPhimDaNhap(VIDEO A[], int n, char ten[]);
void nhapTenPhimCanTim(char ten[]);
void xuatTenPhim(VIDEO x);
void timPhimCungTheLoai(VIDEO A[], int n,char tl[]);
void nhapTheLoaiCanTim(char tl[]);
void timPhimDoNamChinhDong(VIDEO A[], int n, char nc[]);
void nhapTenNamChinhCanTim(char nc[]);
void nhapTenDaoDienCanTim(char dd[]);
void timPhimDoDaoDienLam(VIDEO A[], int n, char dd[]);

int main()
{
	VIDEO A[100];
	int n;
	char ten[51];
	char tl[9];
	char nc[21];
	char dd[21];
	nhapDanhSachPhim(A,n);
	nhapTenPhimCanTim(ten);	//cau a
	timThongTinPhimDaNhap(A,n,ten);
	xuatDanhSachPhim(A,n);	
	nhapTheLoaiCanTim(tl);
	timPhimCungTheLoai(A,n,tl);		// cau b
	nhapTenNamChinhCanTim(nc);		//cau c
	timPhimDoNamChinhDong(A,n,nc);
	nhapTenDaoDienCanTim(dd);			//cau d
	timPhimDoDaoDienLam(A,n,dd);
	
	
	
	return 0;	
}
void nhapTenDaoDienCanTim(char dd[])
{
	fflush(stdin);
	cout<<"Nhap ten dao dien can tim: ";
	gets(dd);
}
void timPhimDoDaoDienLam(VIDEO A[], int n, char dd[])
{
	bool co = false;
	for(int i = 0; i<n; i++)
		if(strcmp(A[i].tendaodien,dd)==0)
		{
			xuatTenPhim(A[i]);
			co =true;
		}
	if(!co)
		cout<<"Khong tim thay!";	
}

void nhapTenNamChinhCanTim(char nc[])
{
	fflush(stdin);
	cout<<"Nhap ten nam chinh can tim: ";
	gets(nc);
}

void timPhimDoNamChinhDong(VIDEO A[], int n, char nc[])
{
	bool co = false;
	for(int i = 0;i<n;i++)
		if(strcmp(A[i].tennamchinh,nc) == 0)
		{
			xuatTenPhim(A[i]);
			co = true;
		}
	if(!co)
		cout<<"Khong tim thay!";
}

void nhapTheLoaiCanTim(char tl[])
{
	fflush(stdin);
	cout<<"Nhap the loai can tim: ";
	gets(tl);
}
void xuatTenPhim(VIDEO x)
{
	cout<<"---------------------"<<endl;
	cout<<"Phim: "<<x.tenphim<<endl;
}
void timPhimCungTheLoai(VIDEO A[], int n, char tl[])
{
	bool co = false;
	for(int i = 0;i<n;i++)
		if(strcmp(A[i].theloai,tl) == 0)
		{
			xuatTenPhim(A[i]);
			co = true;
		}
	if(!co)
		cout<<"Khong tim thay!";
		
}
void nhapTenPhimCanTim(char ten[])
{
	fflush(stdin);
	cout<<"Nhap ten phim can tim: ";
	gets(ten);
}

void timThongTinPhimDaNhap(VIDEO A[], int n, char ten[])
{
	bool co = false;
	for(int i = 0;i<n;i++)
		if(strcmp(A[i].tenphim,ten) == 0)
		{
			xuat1Phim(A[i]);
			co = true;
		}
	if(!co)
		cout<<"Khong tim thay!";
}

void xuat1Phim(VIDEO x)
{
	cout<<"--------------------------------"<<endl;
	cout<<"Phim: "<<x.tenphim<<endl;
	cout<<"The loai: "<<x.theloai<<endl;
	cout<<"Dao dien: "<<x.tendaodien<<endl;
	cout<<"Nam chinh: "<<x.tennamchinh<<endl;
	cout<<"Nu chinh: "<<x.tennuchinh<<endl;
	cout<<"San xuat nam: "<<x.namsanxuat<<endl;
	cout<<"Hang san xuat: "<<x.hangsanxuat<<endl;
	cout<<"\n";
	
}

void xuatDanhSachPhim(VIDEO A[], int n)
{
	for(int i = 0; i<n; i++)
		xuat1Phim(A[i]);
}
void nhap1Phim(VIDEO &x)
{
	fflush(stdin);
	cout<<"Nhap ten phim: ";
	cin.getline(x.tenphim,51);
	fflush(stdin);
	cout<<"Nhap theo loai: ";
	cin.getline(x.theloai,9);
	fflush(stdin);
	cout<<"Nhap ten dao dien: ";
	cin.getline(x.tendaodien,21);
	fflush(stdin);
	cout<<"Nhap ten nam chinh: ";
	cin.getline(x.tennamchinh,21);
	fflush(stdin);
	cout<<"Nhap ten nu chinh: ";
	cin.getline(x.tennuchinh,21);
	fflush(stdin);
	cout<<"Nhap nam san xuat: ";
	cin>>x.namsanxuat;
	fflush(stdin);
	cout<<"Nhap hang san xuat: ";
	cin.getline(x.hangsanxuat,51);
	
}
void nhapDanhSachPhim(VIDEO A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		nhap1Phim(A[i]);
}