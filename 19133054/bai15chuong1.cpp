//bài linh kiện xài struct

#include<iostream>
#include<string.h>
using namespace std;

struct LINHKIEN 
{
	char ten[31];
	char quycach[11]; //hop cai bo
	char loai;
	int dongia;	
};

void xuat1LinhKien(LINHKIEN x);
void xuat(LINHKIEN A[], int n);
void nhap1LinhKien(LINHKIEN &x);
void nhap(LINHKIEN A[], int &n);
void sapXepTheoTen(LINHKIEN A[], int n);
void sapXepTheoLoai(LINHKIEN A[], int n);
;void sapXepTheoLoaiTen(LINHKIEN A[], int n);
bool kiemTra(LINHKIEN A[], int n);
void lietKeTheoTen(LINHKIEN A[], int n,char ten[]);
int main()
{
	LINHKIEN A[100];
	int n;
	nhap(A,n);
	sapXepTheoTen(A,n);
	xuat(A,n);
	sapXepTheoLoai(A,n);
	xuat(A,n);
	sapXepTheoLoaiTen(A,n);
	xuat(A,n);
	bool kt = kiemTra(A,n);
	cout<<kt;
	char ten[31];
	fflush(stdin);
	cout<<"Nhap vao ten linh kien can liet ke: ";
	cin.getline(ten,31);
	lietKeTheoTen(A,n,ten);
	return 0;
}

void lietKeTheoTen(LINHKIEN A[], int n,char ten[])
{
	bool co = false;
	for(int i = 0;i<n;i++)
		if(strcmp(A[i].ten,ten)==0)
		{
			xuat1LinhKien(A[i]);
			co = true;
		}
	if(!co)
		cout<<"Khong tim thay";  
}
bool kiemTra(LINHKIEN A[], int n)
{
	int d = 0;
	for(int i =0;i<0;i++)
		if(A[i].loai =='A' || A[i].loai=='a')
			d++;
	if(d>9)
		return true;
	return false;
}
void sapXepTheoLoaiTen(LINHKIEN A[], int n)
{
	for(int i = 0;i<n-1;i++)
		for(int j = i+1;j<n;j++)
			if( (A[i].loai>A[j].loai) || (A[i].loai==A[j].loai && strcmp(A[i].ten,A[j].ten)>0) )
			{
				LINHKIEN t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		
}

void sapXepTheoTen(LINHKIEN A[], int n)
{
	for(int i = 0;i<n-1;i++)
		for(int j = i+1;j<n;j++)
			if(strcmp(A[i].ten,A[j].ten)>0) // stricmp: khong phan biet chu Hoa
			{
				LINHKIEN t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		
}
void sapXepTheoLoai(LINHKIEN A[], int n)
{
	for(int i = 0;i<n-1;i++)
		for(int j = i+1;j<n;j++)
			if(A[i].loai>A[j].loai) // stricmp: khong phan biet chu Hoa
			{
				LINHKIEN t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		
}
void xuat1LinhKien(LINHKIEN x)
{
	cout<<"Ten: "<<x.ten<<endl;
	cout<<"Quy cach: "<<x.quycach<<endl;
	cout<<"Loai: "<<x.loai<<endl;
	cout<<"Don gia: "<<x.dongia<<endl;
}
void xuat(LINHKIEN A[], int n)
{
	cout<<"---------------------"<<endl;
	for(int i = 0; i<n; i++)
		xuat1LinhKien(A[i]);
}
void nhap1LinhKien(LINHKIEN &x)
{
	fflush(stdin);
	cout<<"Nhap ten: ";
	cin.getline(x.ten,31);
	cout<<"Nhap quy cach: ";
	cin.getline(x.quycach,11);
	cout<<"Nhap loai: ";
	cin>>x.loai;
	cout<<"Nhap don gia: ";
	cin>>x.dongia;
}
void nhap(LINHKIEN A[], int &n)
{
	cin>>n;
	for(int i = 0;i<n;i++)
		nhap1LinhKien(A[i]);
}