#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node* next;
};
node* getnode(int x)
{
	node* p;
	p = new node;
	if (p == NULL)
	{
		exit(1);
	}
	p->info = x;
	p->next = NULL;
	return p;
}
void pushb(node*& s, int x)
{
	int tam;
	while (x != 0)
	{
		tam = x % 2;
		node* ptam = getnode(tam);
		if (s == NULL)
		{
			s = ptam;
		}
		else
		{
			ptam->next = s;
			s = ptam;
		}
		x /= 2;
	}
}
void pushh(node*& s, int x)
{
	int tam;
	while (x != 0)
	{
		tam = x % 16;
		node* ptam = getnode(tam);
		if (s == NULL)
		{
			s = ptam;
		}
		else
		{
			ptam->next = s;
			s = ptam;
		}
		x /= 16;
	}
}
void pop(node*& s)
{
	node* p;
	int x;
	while (s)
	{
		p = s;
		x = p->info;
		s = s->next;
		cout << x;
		delete(p);
	}
}
void poph(node*& s)
{
	node* p;
	int x;
	while (s)
	{
		p = s;
		x = p->info;
		s = s->next;
		switch (x)
		{
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		default:
			cout << x;
			break;
		}
		delete(p);
	}
}
void poph2(node*& s)
{
	node* p;
	int x;
	while (s)
	{
		p = s;
		x = p->info;
		s = s->next;
		if (x > 9)
		{
			x += 55;
			cout << char(x);
		}
		else
		{
			cout << x;

		}
		delete(p);
	}
}
void main()
{
	node* s = NULL;
	int x;
	cout << "Nhap x:";
	cin >> x;
	pushh(s, x);
	poph2(s);
}
