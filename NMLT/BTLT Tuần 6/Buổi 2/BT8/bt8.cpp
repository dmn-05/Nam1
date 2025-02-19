#include<iostream>
using namespace std;
void main()
{
	int dem = 1, so, max=INT_MIN;
	while (true)
	{
		cout << "nhap so:\n";
		cin >> so;
		if (so==0)
		{
			break;
		}
		if (so > max)
		{
			max = so;
		}
	}
	cout << "gia tri lon nhat trong cac gia tri vua nhap la: " << max << endl;
}