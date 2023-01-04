#include<iostream>
using namespace std;
void xuatTamGiac(int n);
int toHop(int k, int n);
int main()
{
    int n;
    cin >> n;
    xuatTamGiac(n);
    return 0;
}
void xuatTamGiac(int n)
{
	for (int i = 0; i < n; i++)
	{
        for (int j = n; j > i; j--)
            cout << " ";
        for (int j = 0; j <= i; j++) {
            cout << toHop(j, i) << " ";
        }
        cout << endl;
    }
}
int toHop(int k, int n)
{
    if (k == 0 || k == n) 
		return 1;
    if (k == 1) 
		return n;
    return toHop(k - 1, n - 1) + toHop(k, n - 1);
}