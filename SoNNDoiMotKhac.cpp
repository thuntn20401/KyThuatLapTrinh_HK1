//chuong 1. bai18

#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	fstream output;
	output.open("songuyen.inp", ios::out);
	if(output)
	{
		int n = 10000;
		int B[32768] = {0};
		srand((unsigned)time(NULL));
		int dem = 0;
		while(dem < n)
		{
			int x = rand()%32768;
			if(B[x] == 0)
			{
				B[x] = 1;
				output<<x<<" ";
				dem++;
			}
			//cout<<endl;
		}
		output.close();
	}
}
