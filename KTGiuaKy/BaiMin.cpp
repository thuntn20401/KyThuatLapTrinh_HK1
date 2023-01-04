#include<stdio.h>
void nhap(int a[][100], int &m, int &n){
	scanf("%d%d",&m,&n);
	for(int i=1; i<=m; i++)
		for(int j=1; j<= n; j++)
			scanf("%d",&a[i][j]);
	
}
int laDiemLoi(int a[][100], int i, int j){
    int X[8] ={-1, -1, -1, 0, 1, 1,  1,  0 };
	int Y[8] ={-1,  0,  1, 1, 1, 0, -1, -1};
	int count = 0;
	for(int k=0; k<8; k++){
		if(a[i + X[k]][j +Y[k]] == 9){
			count++;
		}
	}
	return count;
}
int demDiemLoi(int a[][100], int m, int n){
	int dem = 0;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n;j++){
            if(a[i][j] == 9){
                continue;
            }else{
                if(a[i][j] != laDiemLoi(a,i,j)){
                    dem++;
                }
            }
		}
	}
	return dem;
}
int main(){
	int a[100][100]={0}, m,n;
	nhap(a,m,n);
	int kq = demDiemLoi(a,m,n);
	printf("%d",kq);
}
