#include<iostream>
using namespace std;
void main()
{
	float diem;
	cin >> diem;
	if (0<=diem&&diem<=10)
	{
		if (8.5<=diem&&diem<=10)
		{
			cout << "A";
		}
		else if (7<=diem)
		{
			cout << "B";
		}
		else if (5.5<=diem)
		{
			cout << "C";
		}
		else if (4<=diem)
		{
			cout << "D";
		}
		else
		{
			cout << "E";
		}
	}
	else
	{
		cout << "diem khong hop le";
	}
}
