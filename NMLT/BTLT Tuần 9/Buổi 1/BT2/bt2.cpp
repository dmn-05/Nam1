#include<iostream>
using namespace std;
void xuatchu(int n)
{
	switch (n)
	{
	case 1: cout << "Mot"; break;
	case 2: cout << "hai"; break;
	case 3: cout << "Ba"; break;
	case 4: cout << "Bon"; break;
	case 5: cout << "Nam"; break;
	case 6: cout << "Sau"; break;
	case 7: cout << "Bay"; break;
	case 8: cout << "Tam"; break;
	case 9: cout << "Chin"; break;
	default: cout << "Nhap sai";break;
	}
}
void main()
{
	int a;
	cout << "Nhap vao so tu 1->9\n";
	cin >> a;
	xuatchu(a);
}