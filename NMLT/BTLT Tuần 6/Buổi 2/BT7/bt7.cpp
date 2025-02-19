#include<iostream>
using namespace std;
void main()
{
	int c, m;
	while (true)
	{
		cout << "Nhap so dien cu:\n";
		cin >> c;
		while (c<0)
		{
			cout << "Nhap so dien cu:\n";
			cin >> c;
		}
		cout << "Nhap so dien moi:\n";
		cin >> m;
		while (m<0)
		{
			cout << "Nhap so dien moi:\n";
			cin >> m;
		}
		cout << "So dien tieu thu la: "<<m-c<<endl;
	}
}