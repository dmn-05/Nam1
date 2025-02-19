#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int i, n;
	double s1, s2, s3, s4;
	while (true)
	{
		s1 = s2 = s3 = s4 = 0;
		cout << "hay nhap n: ";
		cin >> n;
		for (i = 1; i <= n; i++)
		{
			s1 = s1 + i;
			s2 = s2 + pow(i, 2);
			s3 = sqrt(3 + s3);
			s4 = 1 / (2 + s4);
		}
		s1 = s1 / n;
		s2 = sqrt(s2);
		cout << "S1 la: " << s1<<endl;
		cout << "S2 la: " << s2 << endl;
		cout << "S3 la: " << s3 << endl;
		cout << "S4 la: " << s4 << endl;
	}
}