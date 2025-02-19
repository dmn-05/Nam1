#include<iostream>
using namespace std;
void main()
{
	int counter = 1, number, largest;
	while (counter <= 10)
	{
		cout << "nhap so nguyen thu " << counter << ":";
		cin >> number;
		if (counter == 1 || number > largest)
		{
			largest = number;
		}
		counter++;
	}
	cout << "gia tri lon nhat trong 10 gia tri vua nhap la: " << largest << endl;
}