#include <iostream>

int main() {
	int *element= NULL; //M?ng luu c?u h?nh
	int n, k;
	std::cout << "Nhap n: ";
	std::cin >> n;
	std::cout << "Nhap k: ";
	std::cin >> k;
	element= new int[k];
	for(int j = 0; j < k; j++)
        element[j] = j+1; //Set c?u h?nh ban d?u l? 1,2,...,k

    std::cout << "Cac tap con la:\n";
	int index = 0;
	do {
		for(int j = 0; j < k; j++)
			std::cout << element[j]; //In t?p con v?a t?m du?c
		std::cout << std::endl;
		index = k-1;

        //?o?n b?n du?i l? sinh c?c t?p h?p theo th? t? t? di?n
		while((index >= 0) && (element[index] == n - k + index + 1))
			index--;

		if(index >= 0) {
			element[index]++;
			for(int j = index+1; j < k; j++)
				element[j] = element[j-1] + 1;
		}
	}while (index != -1);
	delete[] element;
	return 1;
}
