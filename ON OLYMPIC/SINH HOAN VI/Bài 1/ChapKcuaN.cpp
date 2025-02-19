#include<iostream>
#include<string>

using namespace std;
int b[100];
string a[100];
int n = 5;
int k = 3;
bool check = 1;
void khoitaoN()
{
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap ten nguoi dung: ";
		getline(cin, a[i]);
	}
}
void khoitaoB()
{
	for (int i = 1; i <= k; i++)
	{
		b[i] = i;
	}
}
void sinh()
{
	int i=k;
	while (i >= 1 && b[i] == n - k + i)
	{
		i--;
	}
	if (i==0)
	{
		check = 0;
	}
	else
	{
		b[i]++;
		for (int j = i+1; j <= k; j++)
		{
			b[j] = b[j -1]+1;
		}
	}
}
void main()
{
	khoitaoN();
	khoitaoB();
	while (check)
	{
		for (int i = 1; i <= k; i++)
		{
			int m = b[i];
			cout << a[m];
		}
		cout << endl;
		sinh();
	}
}