#include<stdio.h>
#include<string.h>
void cong(char a[],char b[], char tong[]);
void nhan(char a[], char b[], char tich[]);

void main()
{
	char a[101],b[101],c[202];
	gets(a);
	gets(b);
	nhan(a,b,c);
	puts(c);
}
void nhan(char a[], char b[], char kq[])
{
	char h[202]="0";
	int la=strlen(a);
	int lb=strlen(b);
	strrev(a);	strrev(b);
	for(int i=0;i<lb;i++)
	{
		char tam[2]="0";
		char s[102]="";	int ns=0; s[ns]='0';
		for(int j=0;j<la;j++)
		{
			int tich=(a[j]-48)*(b[i]-48)+(s[ns]-48);
			s[ns]=tich%10+48;
			ns++;
			s[ns]=tich/10+48;
		}
		while(s[ns]=='0' && ns>0) ns--;
		s[ns+1]='\0';
		strrev(s);
		for(int k=0;k<i;k++)
		{
			strcat(s,tam);
		}
		char v[202];
		char tich[102]; strcpy(tich,h);
		cong(s,tich,v);
		strcpy(h,v);
	}
	strcpy(kq,h);
}
void cong(char a[],char b[], char s[])
{
	int la=strlen(a);
	int lb=strlen(b);
	strrev(a);	strrev(b);
	char tam[2]="0";
	if(la>lb)
	{
		for(int i=lb;i<la;i++)
			strcat(b,tam);
		b[la]='\0';
	}
	else
	{
		for(int j=la;j<lb;j++)
			strcat(a,tam);
		a[lb]='\0';
	}
	int ns=0; s[ns]='0';
	for(int k=0;k<la;k++)
	{
		int tong=(a[k]-48)+(b[k]-48)+(s[ns]-48);
		s[ns]=tong%10+48;
		ns++;
		s[ns]=tong/10+48;
	}
	while(s[ns]=='0' && ns>0) ns--;
	s[ns+1]='\0';
	strrev(s);
}
