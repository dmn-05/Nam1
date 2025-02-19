#include<iostream>
using namespace std;
void main()
{
	int n, t, i;
	while (true)
	{
		cout << "Nhap N:\n";
		cin >> n;
		if (n<1)
		{
			break;
		}
		i = 1;
		t = 0;
		while (i <= n)
		{
			t += i;
			if (i == 1)
			{
				cout << i;
			}
			else
			{
				cout << "+" << i;
			}
			i++;
		}
		cout << "=" << t << endl;
	}
}