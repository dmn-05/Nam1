#include<iostream>
#include<string>
using namespace std;
void main()
{
	string np;
	int n;
	cout << "Nhap so nguyen duong N: ";
	cin >> n;
	while (n>0)
	{
		np =np+to_string(n % 2);
		n = n / 2;
	}
	cout << "nhi phan: " << np;
}