#include<iostream>
using namespace std;
void abc(int x, int k, int& kq)
{
	kq = 1;
	for (int i = 1; i <= k; i++)
	{
		kq *= x;
	}
}
void main()
{
	int a = 2, b = 3, c;
	abc(a, b, c);
	cout << c;
}
