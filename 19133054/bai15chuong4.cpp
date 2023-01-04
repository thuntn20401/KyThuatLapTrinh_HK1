//bai 15
#include<iostream>
using namespace std;
void hanoi(int n, char nguon, char dich, char tam);
int main()
{
	int n;
	cin>>n;
	hanoi(n,'n','d','t');
}

void hanoi(int n, char nguon, char dich, char tam)
{
	if(n>0)
	{
		hanoi(n-1,nguon,tam,dich);
		cout<<"Chuyen dia thu " <<n<< " tu cot " <<nguon<< " den cot " <<dich<<endl;
		hanoi(n-1,tam,dich,nguon);
	}
}