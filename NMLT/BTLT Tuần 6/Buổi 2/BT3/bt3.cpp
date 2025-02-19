#include<iostream>
using namespace std;
void main()
{
	int a, b, u, i;
	while (true)
	{
		cout << "Nhap so a va b:\n";
		cin >> a;//4
		if (a==-1)
		{
			break;
		}
		cin >> b;//2
		i = 1;
		while (i <= a && i <= b)
		{
			if (a % i == 0 && b % i == 0)
			{
				u = i;//2
			}
			i++;
		}
		cout << "uoc chung lon nhat la: " << u << endl;
	}
}