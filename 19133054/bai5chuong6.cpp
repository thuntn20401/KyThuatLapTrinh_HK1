#include <iostream>
using namespace std;
 
int tichMaTran(int A[][100], int B[][100], int m, int n, int m1);
void nhapMang(int n, int m, int A[][100]);
void xuatMang(int n, int m, int A[][100]);
 
int main()
{
    int n, m;
    cout<<"MA TRAN A:\nNhap so hang, so cot lan luot: ";
    cin>>n>>m;
    int A[100][100];
    cout<<"\n------Nhap phan tu ma tran A-----\n";
    nhapMang(n, m, A);
     
    int n1, m1;
    cout<<"MA TRAN B:\nNhap so hang, so cot lan luot: ";
    cin>>n1>>m1;
    int B[100][100];
    cout<<"\n------Nhap phan tu ma tran B-----\n";
    nhapMang(n1, m1, B);
     
    if(m == n1){
        tichMaTran(A,B,m,n,m1);
    }else{
        cout<<"So cot Ma tran A khac so hang ma tran B, khong the nhan 2 ma tran nay";
    }
    return 0;
}
int tichMaTran(int A[][100], int B[][100], int m, int n, int m1){
    int C[100][100];
    int i, j, k;
     for(i=0;i<n;i++) 
        for(j=0;j<m1;j++) {
         int tt=0;
           for(k=0;k<m;k++)
               {
                 tt = tt + (A[i][k] * B[k][j]);
                }
            C[i][j] = tt;
    }
     
    cout<<"\nTICH 2 MA TRAN A B\n";
    xuatMang(n,m1,C);
}
void nhapMang(int n, int m, int A[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            cin>>A[i][j];
        }
    }
}
void xuatMang(int n, int m, int A[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
        cout<<A[i][j]<<"  ";
        }
        cout<<"\n";
    }
}



