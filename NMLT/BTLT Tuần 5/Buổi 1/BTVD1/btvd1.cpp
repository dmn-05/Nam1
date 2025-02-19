#include<iostream>
using namespace std;
void main()
{
	int num;
	cin >> num;
	if (num%2==0)
	{
		cout << "so " << num << " la so chan\n";
		if ((num/2)%2==0)
		{
			cout << "mot nua " << num << " cung la so chan";
		}
		else
		{
			cout << "mot nua " << num << " la so le";
		}
	}
	else
	{
		cout << "so " << num << " la so le";
	}
}
