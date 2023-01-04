#include<stdio.h>
#include<iostream>
using namespace std;
int A[100], P[100], n;
int chenhlech= INT_MAX;

int main(){
	nhap();
	lietKeNP(0);
	xuat();
}
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void chiaNhom(){
	int sumA=0,sumB=0;
	for(int i=0; i<n; i++){
		if(P[i]==0)
			sumA+=A[i];
		else
			sumB+=A[i];
	}

	int min = 0;
	if(sumA > sumB){
		min = sumA -sumB;
	}else{
		min = sumB - sumA;
	}
	
	if(min < chenhlech){
		chenhlech = min;
	}
}
void xuat(){
	printf("%d", chenhlech);
}
void lietKeNP(int k){
	if(k==n){
		chiaNhom();
	}else{
		for(int i = 0; i<=1;i++){
			P[k]=i;
			lietKeNP(k+1);
		}
	}
}
