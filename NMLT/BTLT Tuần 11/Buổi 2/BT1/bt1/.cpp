#include<iostream>
using namespace std;
#define size 100
void nhapmangnguon(int nguon[], int& nnguon)
{
	do
	{
		cout << "Nhap so luong phan tu cua mang nguon\n";
		cin >> nnguon;
	} while (nnguon<=0);
	for (int i = 0; i < nnguon; i++)
	{
		cout << "Nhap vao phan tu nguon[" << i << "]: ";
		cin >> nguon[i];
	}
}
int tachmangnguon(int nguon[], int nnguon, int chan[], int& nchan, int le[], int& nle)
{
	nchan = 0;
	le = 0;
	for (int i = 0; i < nnguon; i++)
	{
		if (nguon[i]%2==0)
		{
			chan[nchan++] = nguon[i];
		}
		else
		{
			le[nle++] = nguon[i];
		}
	}
}
void main()
{
	int arr[size], n;
	nhapmangnguon(arr, n);
	tachmangnguon(arr, n, , int& nchan, int le[], int& nle);
}