#include<iostream>
using namespace std;
void main()
{
	int so,a,b,c;
	cin >> so;
	if (so >= 10 && so < 1000)
	{
		a = so / 100 % 10;
		b = so / 10 % 10;
		c = so % 10;
		switch (a)
		{
		case 1:cout << "mot tram "; break;
		case 2:cout << "hai tram "; break;
		case 3:cout << "ba tram "; break;
		case 4:cout << "bon tram "; break;
		case 5:cout << "nam tram "; break;
		case 6:cout << "sau tram "; break;
		case 7:cout << "bay tram "; break;
		case 8:cout << "tam tram "; break;
		case 9:cout << "chin tram "; break;
		}
		switch (b)
		{
		case 1:cout << "muoi "; break;
		case 2:cout << "hai muoi "; break;
		case 3:cout << "ba muoi "; break;
		case 4:cout << "bon muoi "; break;
		case 5:cout << "nam muoi "; break;
		case 6:cout << "sau muoi "; break;
		case 7:cout << "bay muoi "; break;
		case 8:cout << "tam muoi "; break;
		case 9:cout << "chin muoi "; break;
		case 0:cout << "le "; break;
		}
		switch (c)
		{
		case 1:cout << "mot "; break;
		case 2:cout << "hai "; break;
		case 3:cout << "ba "; break;
		case 4:cout << "bon "; break;
		case 5:cout << "nam "; break;
		case 6:cout << "sau "; break;
		case 7:cout << "bay "; break;
		case 8:cout << "tam "; break;
		case 9:cout << "chin "; break;
		}
	}
}