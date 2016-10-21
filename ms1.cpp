#include<iostream>
using namespace std;


struct node
{
	node * left;
	node * right;
	int data;
};

void print(node *root)
{
    if (root != NULL)
    {
        printf("%d ",root->data);
    }
    printf("\n");
}

node * in(node * r)
{
	static node * prev=NULL;
	node *r1,*r2;
	if(r==NULL)
	return NULL;
	
	
	r1=in(r->left);
	
	if(prev!=NULL)
	{
		if(prev->data>r->data)
		{
			return r;
		}
	}
	prev=r;
	r2=in(r->right);
	
	if(r1)
	{
		return r1;
	}
	else if(r2)
	{
		return r2;
	}
	else
	{
		return NULL;
	}
}

node * newnode(int n)
{
	node * ptr;
	ptr=new node;
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->data=n;
	return ptr;
}

int main()
{
	node *root,*d;
	root=newnode(3);
	root->left=newnode(1);
	root->left->right=newnode(0);
	root->right=newnode(5);
	root->right->left=newnode(4);
	
	d=in(root);
	print(d);
	return 0;
	
}
