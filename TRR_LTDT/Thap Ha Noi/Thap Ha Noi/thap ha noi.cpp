#include<iostream>
using namespace std;
void ThapHaNoi(int n, char A,char B,char C)
{
	if (n==1)
	{
		cout << "chuyen 1 dia tu " << A << "sang " << C << ";" << endl;
	}
	else
	{
		ThapHaNoi(n - 1, A, B, C);
		ThapHaNoi(1, A, B, C);
		ThapHaNoi(n - 1, B, A, C);
	}
}
int main()
{
	int n;
	cout << "nhap so dia\n";
	cin >> n;
	ThapHaNoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}