#include<iostream>
using namespace std;
void main()
{
	int n, max, min = 10, k, i = 1;
	while (true)
	{
		cout << "Nhap vao so nguyen N:\n";
		cin >> n;
		if (n==-1)
		{
			break;
		}
		do
		{
			k = n % 10;
			if (i == 1)
			{
				max = k;
			}
			if (i == 2 && max > k || min > k)
			{
				min = k;
			}
			if (k > max)
			{
				max = k;
			}
			i++;
			n /= 10;
		} while (n != 0);
		cout << "so lon nhat la: " << max << endl;
		cout << "so be nhat la: " << min << endl;
	}
}