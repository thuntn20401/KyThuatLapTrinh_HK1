//chuong1.bai13 dau sach

#include<iostream>
using namespace std;

struct DAUSACH
{
	int masosach;
	char tensach[51];
	char tacgia[51];
	int soluong;
};
void nhap1DauSach(DAUSACH &x);
void nhapDSDauSach(DAUSACH A[], int &n);
void xuat1DauSach(DAUSACH x);
void xuatDSDauSach(DAUSACH A[], int n);
void timThongTinSachCanTim(DAUSACH A[], int n, char ten[]);
void nhapTenSachCanTim(char ten[]);
void xuatKQ(int x);
int tinhTongSoSach(DAUSACH A[], int n);
int tinhTong(int x, int y);
int main()
{
	DAUSACH A[100];
	int n;
	char ten[51];
	nhapDSDauSach(A,n); //cau a
	xuatDSDauSach(A,n);
	nhapTenSachCanTim(ten); //cau b
	timThongTinSachCanTim(A,n,ten);
	int tong = tinhTongSoSach(A,n);
	xuatKQ(tong);
	return 0;
}
int tinhTong(int x, int y)
{
	int t = x + y;
	return t;
}
int tinhTongSoSach(DAUSACH A[], int n)
{
	int tong = A[0].soluong;
	for(int i=1;i<n;i++)
		tong = tinhTong(A[i].soluong,tong);
	return tong;
}

void xuatKQ(int x)
{
	cout<<x;
}

void nhapTenSachCanTim(char ten[])
{
	fflush(stdin);
	cout<<"Nhap ten sach can tim: ";
	gets(ten);
}
void timThongTinSachCanTim(DAUSACH A[], int n, char ten[])
{
	bool co = false;
	for(int i = 0; i<n; i++)
		if(strcmp(A[i].tensach,ten) == 0)
		{
			xuat1DauSach(A[i]);
			co = true;
		}
	if(!co)
		cout<<"Khong tim thay!";
}
void xuat1DauSach(DAUSACH x)
{
	cout<<"------------------"<<endl;
	cout<<"Ma sach: "<<x.masosach<<endl;
	cout<<"Ten sach: "<<x.tensach<<endl;
	cout<<"Tac gia: "<<x.tacgia<<endl;
	cout<<"So luong: "<<x.soluong<<endl;
}
void xuatDSDauSach(DAUSACH A[], int n)
{
	for(int i = 0; i<n; i++)
		xuat1DauSach(A[i]);
}
void nhap1DauSach(DAUSACH &x)
{
	fflush(stdin);
	cout<<"Nhap ma so sach: ";
	cin>>x.masosach;
	fflush(stdin);
	cout<<"Nhap ten sach: ";
	cin.getline(x.tensach,51);
	fflush(stdin);
	cout<<"Nhap tac gia: ";
	cin.getline(x.tacgia,51);
	fflush(stdin);
	cout<<"Nhap so luong: ";
	cin>>x.soluong;
	
}
void nhapDSDauSach(DAUSACH A[], int &n)
{
	cin>>n;
	for(int i = 0;i<n;i++)
		nhap1DauSach(A[i]);
}