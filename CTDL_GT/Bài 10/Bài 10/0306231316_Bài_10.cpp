#include<iostream>
#include<string>
using namespace std;
struct node
{
	string ten;
	node* next;
};
struct list
{
	node* head;
	node* tail;
};
node* getnode(string x)
{
	node* p = new node;
	if (p==NULL)
	{
		exit(1);
	}
	p->ten = x;
	p->next = NULL;
	return p;
}
void themtail(list &l,string x)
{
	node* p;
	p = getnode(x);
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
void ghep(list& nam, list& nu)
{
	node* lnam;
	node* lnu;
	int dem=1;
	while (nam.head != NULL && nu.head != NULL)
	{
		lnam = nam.head;
		lnu = nu.head;
		cout << "Cap " << dem++ << " la: " << lnam->ten << " va " << lnu->ten << endl;
		nam.head = nam.head->next;
		if (nam.head == NULL)
		{
			nam.tail = NULL;
		}
		nu.head = nu.head->next;
		if (nu.head == NULL)
		{
			nu.tail = NULL;
		}
		delete lnam;
		delete lnu;
	}
	cout << "Cac ten con lai: ";
	while (nam.head != NULL)
	{
		lnam = nam.head;
		cout << lnam->ten << " ";
		nam.head = nam.head->next;
		delete lnam;
	}
	while (nu.head != NULL)
	{
		lnu = nu.head;
		cout << lnu->ten << " ";
		nu.head = nu.head->next;
		delete lnu;
	}
}
void main()
{
	list nam, nu;
	string ten;
	bool gioitinh;
	int dem = 1;
	nam.head = nam.tail = nu.head = nu.tail = NULL;
	while (true)
	{
		cout << "Nhap Ten: ";
		getline(cin, ten);
		if (ten == "0")
		{
			break;
		}
		cout << "Gioi tinh: ";
		cin >> gioitinh;
		cin.ignore();
		if (gioitinh)
		{
			themtail(nu, ten);
		}
		else
		{
			themtail(nam, ten);
		}
	}
	ghep(nam, nu);
}