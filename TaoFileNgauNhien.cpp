//chuong 1.bai17

#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void taoFile();
void docFile();
int main()
{
	taoFile();
	docFile();
}
void taoFile()
{
	fstream output;
	output.open("songuyen.inp", ios::out|ios::binary);
	if(output)
	{
		int A[10];
		int n = 4;	//so dong
		srand((unsigned)time(NULL));
		for(int i = 1; i<=n; i++)
		{
			for(int j = 0; j<10; j++) // tao mang A co 10 ptu
			{
				A[j] = rand()%10;
				cout<<A[j]<<" ";
			}
			output.write(reinterpret_cast<char *>(&A),sizeof(A));
			output.write("\n",1);
			cout<<endl;
		}
		output.close();
	}
}
void docFile()
{
	fstream input("songuyen.inp",ios::in|ios::binary);
	if(!input) //khong mo duoc
	{
		cout<<"Khong mo duoc file";
		exit(0);
	}
	cout<<"------------------"<<endl;
	int n = 0;	//so phan tu
	int A[10000];
	while(true)
	{
		int B[10];
		input.read(reinterpret_cast<char *>(&B), sizeof(B));
		char c;	//doc bo ki tu xuong dong
		input.read(reinterpret_cast<char *>(&c), sizeof(c));
		if(input.eof()) 	//ket thuc file
			break;
		for(int i = 0; i<10; i++)
		{
			A[n] = B[i];
			//cout<<A[n]<<" ";
			n++;
			
		}
	}
	input.close();
	
	for(int i = 0; i<n; i++)
	{
		cout<<A[i] <<" ";
		if((i+1)%10==0)
			cout<<endl;
	}
}

