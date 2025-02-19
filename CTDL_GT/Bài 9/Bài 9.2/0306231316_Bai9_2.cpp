#include<iostream>

using namespace std;
struct node
{
	int info;
	node* next;
};
struct list
{
	node* head, * tail;
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
node* getnodechar(char x)
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
void insertheadchar(list& l, char x)
{
	node* p;
	p = getnodechar(x);
	if (p == NULL)
	{
		cout << "khong tao duoc nut\n";
		exit(1);
	}
	if (l.head == NULL)
	{
		l.head = l.tail = p;
	}
	else
	{
		p->next = l.head;
		l.head = p;
	}
}
void inserttailchar(list& l, char x)
{
	node* p;
	p = getnodechar(x);
	if (p == NULL)
	{
		cout << "khong tao duoc nut\n";
		exit(1);
	}
	if (l.head == NULL)
	{
		l.head = l.tail = p;
	}
	else
	{
		l.tail->next = p;
		l.tail = p;
	}
}
void duyetbieuthuc(char arr[])
{
	for (int i = 0; arr[i]!='\0'; i++)
	{
		if (arr[i]!='*'&&arr[i]!='+'&& arr[i] != '-'&& arr[i] != '/'&& arr[i] != '(' && arr[i] != ')' &&(int(arr[i])<48||int(arr[i])>57))
		{
			int j;
			for (j = i; arr[j]!='\0'; j++)
			{
				arr[j] = arr[j + 1];
			}
			i = -1;
		}
	}
	for (int i = 0; arr[i]!='\0'; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}
void taodanhsach(char chuoi[], list& so, list& dau)
{
	for (int i = 0; chuoi[i]!='\0' ; i++)
	{
		if (chuoi[i]=='(')
		{
			int j;
			for (int k = i; chuoi[k] != '\0'; k++)
			{
				chuoi[k] = chuoi[k + 1];
			}
			for (j = i; chuoi[j]!=')'; j++)
			{

				if (chuoi[j]=='*'||chuoi[j]=='/'||chuoi[j]=='+'||chuoi[j]=='-')
				{
					inserttailchar(dau, chuoi[j]);
				}
				else
				{
					insertheadchar(so, chuoi[j]);
				}
				for (int k = j; chuoi[k] != '\0'; k++)
				{
					chuoi[j] = chuoi[k + 1];
				}
			}
			for (int k = j; chuoi[k] != '\0'; k++)
			{
				chuoi[k] = chuoi[k + 1];
			}
		}
	}
	for (int i = 0; chuoi[i] != '\0'; i++)
	{
		if (chuoi[i]=='*'||chuoi[i]=='/')
		{
			if (chuoi[i + 1] != '\0')
			{
				insertheadchar(so, chuoi[i + 1]);
				for (int j = i + 1; chuoi[j] != '\0'; j++)
				{
					chuoi[j] = chuoi[j + 1];
				}
			}
			insertheadchar(so, chuoi[i - 1]);
			for (int j = i-1; chuoi[j] != '\0'; j++)
			{
				chuoi[j] = chuoi[j + 1];
			}
			inserttailchar(dau, chuoi[i]);
			for (int j = i; chuoi[j] != '\0'; j++)
			{
				chuoi[j] = chuoi[j + 1];
			}
		}
	}
	for (int i = 0; chuoi[i] != '\0'; i++)
	{
		if (chuoi[i] == '+' || chuoi[i] == '-')
		{
			if (chuoi[i+1]!='\0')
			{
				insertheadchar(so, chuoi[i + 1]);
				for (int j = i + 1; chuoi[j] != '\0'; j++)
				{
					chuoi[j] = chuoi[j + 1];
				}
			}
			insertheadchar(so, chuoi[i - 1]);
			for (int j = i - 1; chuoi[j] != '\0'; j++)
			{
				chuoi[j] = chuoi[j + 1];
			}
			inserttailchar(dau, chuoi[i]);
			for (int j = i; chuoi[j] != '\0'; j++)
			{
				chuoi[j] = chuoi[j + 1];
			}
		}
	}
}
void vietlaibieuthu(char chuoi[], list& so, list& dau)
{
	int i = 0;
	node* p=so.head;
	node* q = dau.head;
	while (p!=NULL)
	{
		chuoi[i++] = p->info;
		p = p->next;
	}
	while (q!=NULL)
	{
		chuoi[i++] = q->info;
		q = q->next;
	}
	chuoi[i] = '\0';
}
void push(node*& s, int x)
{
	node* p = getnode(x);
	if (s == NULL)
	{
		s = p;
	}
	else
	{
		p->next = s;
		s = p;
	}
}
int pop(node*& s)
{
	node* p;
	int x;
	if (s)
	{
		p = s;
		x = p->info;
		s = s->next;
		delete(p);
	}
	return x;
}
void main()
{
	node* s = NULL;
	list so, dau;
	so.head = so.tail = dau.head = dau.tail = NULL;
	char chuoi[100];
	cin.getline(chuoi, 50);
	duyetbieuthuc(chuoi);
	taodanhsach(chuoi, so, dau);
	vietlaibieuthu(chuoi, so, dau);
	for (int i = 0; chuoi[i] != '\0'; i++)
	{
		if (chuoi[i] == '*')
		{
			int a = pop(s);
			int b = pop(s);
			int c = a * b;
			push(s, c);

		}
		else if (chuoi[i] == '/')
		{
			int a = pop(s);
			int b = pop(s);
			int c = b / a;
			push(s, c);
		}
		else if (chuoi[i] == '-')
		{
			int a = pop(s);
			int b = pop(s);
			int c = b - a;
			push(s, c);
		}
		else if (chuoi[i] == '+')
		{
			int a = pop(s);
			int b = pop(s);
			int c = a + b;
			push(s, c);
		}
		else
		{
			push(s,int(chuoi[i])-48);
		}
	}
	cout << s->info;
}
