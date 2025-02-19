#include<iostream>
using namespace std;
struct node
{
	int info;
	node *next;
};
struct list
{
	node* head, * tail;
};
node* getnode(int x)
{
	node* p = new node;
	p->info = x;
	p->next = NULL;
	return p;
}
void isT(list& l, int x)
{
	node* p = getnode(x);
	if (l.head==NULL)
	{
		l.head = l.tail = p;
	}
	else
	{
		l.tail->next = p;
		l.tail = p;
	}
}
void output(list l)
{
	node* p = l.head;
	while (p != NULL)
	{
		cout << p->info;
		p = p->next;
	}
}
void main()
{
	list k;
	k.head = k.tail = NULL;
	isT(k, 6);
	isT(k, 4);
	isT(k, 7);
	output(k);
}