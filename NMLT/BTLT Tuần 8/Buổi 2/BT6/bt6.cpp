#include<iostream>
using namespace std;
void main()
{
	int n = 1000, j=1, i=2, dem ,k, h;
	k = 2;
	for (; i < n;)
	{
		i++;
		for (; i < n; i++)
		{
			dem = 0;
			for (j = 1; j <= i; j++)
			{
				if (i % j == 0)
				{
					dem++;
				}
			}
			if (dem == 2)
			{
				h = i;
				break;
			}
		}
		if (k + 2 == h)
		{
			cout << k << "-" << h << endl;
		}
		k = h;
	}
}