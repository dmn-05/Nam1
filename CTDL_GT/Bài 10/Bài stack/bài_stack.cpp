#include<iostream>
using namespace std;
struct node
{
	char info;
	node* next;
};
node* getnode(char x)
{
	node* p;
	p = new node;
	p->info = x;
	p->next=NULL;
	return p;
}
void themhead(node*& s,char x)
{
	node* p;
	p = getnode(x);
	if (s==NULL)
	{
		s = p;
	}
	else
	{
		p->next = s;
		s = p;
	}
}
void main()
{
	node* s = NULL;
	char ch[100];
	cout << "Nhap chuoi: ";
	cin.getline(ch, 10);
	for (int i = 0;ch[i]!='\0'; i++)
	{
		if (ch[i]=='(')
		{
			themhead(s, ch[i]);
		}
		else if(ch[i] == ')')
		{
			if (s==NULL)
			{
				cout << "Khong hop le!";
				exit(1);
			}
			else
			{
				node* p = s;
				s = s->next;
				delete p;
			}
		}
	}
	if (s!=NULL)
	{
		cout << "Khong hop le!";
		return;
	}
	cout << "Hop le";
}