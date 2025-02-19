#include<iostream>
using namespace std;
void main()
{
	int t;
	while (true)
	{
		cout << "Nhap vao thu trong tuan (Nhap -1 ket thuc):\n";
		cin >> t;
		while (t<0&&t>8&&t!=-1)
		{
			cout << "Nhap vao thu trong tuan (Nhap -1 ket thuc):\n";
			cin >> t;
		}
		if (t==-1)
		{
			break;
		}
		switch (t)
		{
		case 1:
			cout << "Monday\n";break;
		case 2:
			cout << "Tuesday\n";break;
		case 3:
			cout << "Wednesday\n";break;
		case 4:
			cout << "Thursday\n";break;
		case 5:
			cout << "Friday\n";break;
		case 6:
			cout << "Satuday\n";break;
		case 7:
			cout << "Sunday\n";break;
		}
	}
}