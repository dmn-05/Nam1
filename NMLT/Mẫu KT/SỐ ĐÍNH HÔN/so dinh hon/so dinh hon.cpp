#include<iostream>
using namespace std;
void main()
{
	int a, b, u, tonguoc1 = 0, tonguoc2 = 0;
	cin >> a;
	cin >> b;
	for (u = 1; u < a; u++)
	{
		if (a % u == 0)
		{
			tonguoc1 += u;
		}
	}
	for (int uoc = 1; uoc < b; uoc++)
	{
		if (b % uoc == 0)
		{
			tonguoc2 += uoc;
		}
	}
	if (b + 1 == tonguoc1 && a + 1 == tonguoc2)
	{
		cout << "So dinh hon";
	}
	else
	{
		cout << "ko la so dinh hon";
	}
}