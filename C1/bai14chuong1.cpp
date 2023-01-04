#include<iostream>
using namespace std;

struct MAYTINH
{
	char loaimay[31];
	char noisanxuat[31];
	int tgbh;
};
void nhap1MayTinh(MAYTINH &x);
void nhapDSMayTinh(MAYTINH A[], int &n);
void xuat1MayTinh(MAYTINH x);
void xuatDSMayTinh(MAYTINH A[], int n);
int demMayBaoHanh1Nam(MAYTINH A[], int n);
void xuat(int x);
void nhapXuatXu(char xuatxu[]);
void timMayTinhXuatXuMy(MAYTINH A[], int n, char xuatxu[]);
int main()
{
	MAYTINH A[100];
	int n;
	nhapDSMayTinh(A,n); //cau a
	char xuatxu[31];
	int soluong = demMayBaoHanh1Nam(A,n); //cau b
	xuat(soluong);
	nhapXuatXu(xuatxu);
	timMayTinhXuatXuMy(A,n,xuatxu);
	
	//xuatDSMayTinh(A,n);
	return 0;

}
void nhapXuatXu(char xuatxu[])
{
	fflush(stdin);
	cout<<"Nhap xuat xu can tim: ";
	gets(xuatxu);
}
void timMayTinhXuatXuMy(MAYTINH A[], int n, char xuatxu[])
{
	bool co = false;
	for(int i = 0; i<n; i++)
		if(strcmp(A[i].noisanxuat,xuatxu)==0)
		{
			xuat1MayTinh(A[i]);
			co = true;
		}
	if(!co)
		cout<<"Khong tim thay!";
}
int demMayBaoHanh1Nam(MAYTINH A[], int n)
{
	int soluong = 0;
	for(int i = 0;i<n;i++)
		if(A[i].tgbh == 1)
			soluong += 1;
	return soluong;
}
void xuat(int x)
{
	cout<<x;
}
void xuat1MayTinh(MAYTINH x)
{
	cout<<"----------------"<<endl;
	cout<<"Loai may: "<<x.loaimay<<endl;
	cout<<"Noi san xuat: "<<x.noisanxuat<<endl;
	cout<<"Thoi gian bao hanh: "<<x.tgbh<<endl;
}
void xuatDSMayTinh(MAYTINH A[], int n)
{
	for(int i = 0; i<n; i++)
		xuat1MayTinh(A[i]);
}
void nhap1MayTinh(MAYTINH &x)
{
	fflush(stdin);
	cout<<"Nhap loai may: ";
	cin.getline(x.loaimay,31);
	fflush(stdin);
	cout<<"Nhap noi san xuat: ";
	cin.getline(x.noisanxuat,31);
	fflush(stdin);
	cout<<"Nhap thoi gian bao hanh: ";
	cin>>x.tgbh;
}
void nhapDSMayTinh(MAYTINH A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		nhap1MayTinh(A[i]);
}