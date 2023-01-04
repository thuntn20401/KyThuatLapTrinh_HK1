#include<stdio.h>
#include<string.h>
void chen(char s[], int k){
	strrev(s);
	int l = strlen(s);
	for(int i=0; i<k; i++){
		s[l+i] = '0';
	}
	s[l+k]='\0';
	strrev(s);
}
void chuanHoa(char a[], char b[]){
	int l1 = strlen(a);
	int l2 = strlen(b);
	if(l1 > l2)
		chen(b,l1-l2);
	else
		chen(a,l2-l1);
}
int soSanh(char a[],char b[]){
	chuanHoa(a,b);
	int leng=strlen(a);
	for(int i=0;i<leng;i++){
		if(a[i] > b[i])
			return 0;
		else if(a[i]==b[i])
			continue;
		else
			return 1;
	}
}
void xoa0(char A[]){
	int len=strlen(A);
	int i=0;
	while(A[i]=='0'){
		for(int j=0;j<len;j++)
			A[j]=A[j+1];
	}
}
int main(){
	char A[1000],B[1000],C[1000];
	gets(A);
	gets(B);
	gets(C);
	if(soSanh(A,B)==0){
		if(soSanh(A,C)==0){
			xoa0(A);
			puts(A);
		}
		else{
			xoa0(C);
			puts(C);
		}
			
	}else{
		if(soSanh(B,C)==0){
			xoa0(B);
			puts(B);
		}
		else{
			xoa0(C);
			puts(C);
		}
			
	}
}
