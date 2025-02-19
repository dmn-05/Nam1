#include<iostream>
#include<string>

using namespace std;
struct Tnode
{
	int key;
	Tnode* pl, * pr;
};

int InsertNode(Tnode*& T, int x)
{
	if ( T != NULL)
	{
		if (T->key==x)
		{
			return 0;
		}
		if (T->key>x)
		{
			return InsertNode(T->pl, x);
		}
		else
		{
			return InsertNode(T->pr,x);
		}
	}
	T = new Tnode;
	if (T==NULL)
	{
		return -1;
	}
	T->key = x;
	T->pl = NULL;
	T->pr = NULL;
	return 1;
}
void NLR(Tnode*& T)
{
	if (T!=NULL)
	{
		cout << T->key << " ";
		NLR(T->pl);
		NLR(T->pr);
	}
}
void LNR(Tnode*& T)
{
	if (T != NULL)
	{
		LNR(T->pl);
		cout << T->key << " ";
		LNR(T->pr);
	}
}
void LRN(Tnode*& T)
{
	if (T != NULL)
	{
		LRN(T->pl);
		cout << T->key << " ";
		LRN(T->pr);
	}
}
bool TimK(Tnode* T,int k)
{
	if (T == NULL)
	{
		return 0;
	}
	if (T != NULL)
	{
		if (T->key == k)
		{
			return 1;
		}
		else if (T->key > k)
		{
			TimK(T->pl, k);
		}
		else if (T->key < k)
		{
			TimK(T->pr, k);
		}
	}
}
void searchstandfor(Tnode*& p, Tnode*& q)
{
	if (q->pl)
	{
		searchstandfor(p, q->pl);
	}
	else
	{
		p->key = q->key;
		p = q;
		q = q->pr;
	}
}
int deleteNode(Tnode*& T, int x)
{
	if (T==NULL)
	{
		return 0;
	}
	else if (T->key>x)
	{
		return deleteNode(T->pl, x);
	}
	else if (T->key<x)
	{
		return deleteNode(T->pr, x);
	}
	else
	{
		Tnode* p = T;
		if (T->pl==NULL)
		{
			T = T->pr;
		}
		else if (T->pr==NULL)
		{
			T = T->pl;
		}
		else
		{
			searchstandfor(p, T->pr);
		}
		delete p;
	}
}
void main()
{
	Tnode* T = NULL;
	int x,k;
	cout << "Nhap gia tri nut, nhap 0 de dung\n";
	cin >> x;
	while (x!=0)
	{
		InsertNode(T, x);
		cout << "Nhap gia tri nut, nhap 0 de dung\n";
		cin >> x;
	}
	//cout << "duyet thu tu theo NLR:";
	//NLR(T);
	cout << "Nhap K: ";
	cin >> k;
	/*if (TimK(T, k))
	{
		cout << "Co\n";
	}
	else
	{
		cout << "Khong co\n";
	}*/
	deleteNode(T, k);
	NLR(T);
}