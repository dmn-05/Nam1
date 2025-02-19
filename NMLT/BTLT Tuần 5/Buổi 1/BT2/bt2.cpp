#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float a, b, c, x1, x2, delta, x, x3;
	cin >> a >> b >> c;
	delta = b * b - 4 * a * c;
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
			{
				cout << "PTVSN";
			}
			else
			{
				cout << "PTVN";
			}
		}
		else
		{
			x = -c / b;
			cout << "Phuong trinh co mot nghiem: " << x;
		}
	}
	else
	{
		if (delta>0)
		{
			x1 = ((-b + sqrt(delta)) / 2 * a);
			x2 = ((-b - sqrt(delta)) / 2 * a);
			cout << "Phuong trinh co hai nghiem phan biet: " << x1 << "," << x2;
		}
		else if (delta==0)
		{
			x3 = -b / (2 * a);
			cout << "Phuong trinh co nghiem kep: " << x3;
		}
		else
		{
			cout << "PTVN";
		}
	}
}