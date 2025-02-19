#include<iostream>
using namespace std;
void main()
{
	int counter = 1, c, number, largest = INT_MIN;
	int second = INT_MIN;
	while (counter <= 10)
	{
		cout << "hay nhap vao so thu " << counter << ":";
		cin >> number;
		if (largest == INT_MIN && second == INT_MIN)
		{
			largest = second = number;
		}
		if (counter == 1 || number > largest)
		{
			second = largest;
			largest = number;
		}
		if (largest > number && number > second)
		{

			second = number;
		}
		counter++;
	}
	cout << " gia tri lon nhat va lon nhi la: " << largest << "," << second;
}