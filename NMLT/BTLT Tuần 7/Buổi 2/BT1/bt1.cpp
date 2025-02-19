#include<iostream>
using namespace std;
void main()
{
	int n, dem = 0;
	cout << "Nhap vao so N:\n";
	cin >> n;
	do
	{
		dem++;
		n /= 10;
	} while (n!=0);
	cout <<"co "<< dem<<" ki so\n";
}