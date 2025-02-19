#include<iostream>
using namespace std;
void main()
{
	int n,np=0,i,x,k;
	cout << "Nhap thap phan:\n";
	cin >> n;
	k = n % 2;
	for (i=0;n!=0;n/=2)
	{
		x = n % 2;
		np =np + x * pow(10, i);
		i++;
	}
	if (k==1)
	{
		cout <<"Chuoi nhi phan tuong ung: 0" << np;
	}
	else
	{
		cout << "Chuoi nhi phan tuong ung: " << np;
	}
}