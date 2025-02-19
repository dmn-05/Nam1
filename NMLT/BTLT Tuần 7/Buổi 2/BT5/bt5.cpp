#include<iostream>
using namespace std;
void main()
{
	int i=1, nthang, thu,dem=0,ithu=1;
	cout << "Nhap so ngay cua thang:\n";
	cin >> nthang;
	cout << "Nhap ngay bat dau:\n";
	cin >> thu;
	while (ithu<thu)
	{
		
		cout << " \t";
		ithu++;
	}
	for (int n = 1, dem = thu; n <= nthang; n++, dem++)
	{	
		cout << n;
		cout << "\t";
		if (dem == 7)
		{
			cout << endl;
			dem = 0;
		}
	}
}