#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *parent;
    int data;
    node *left,*right;
};

node *root = NULL;

node *CreateNode(int data)
{
    node *newnode = new node ;
    newnode->data = data;
    newnode->parent = NULL;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void insertnode(node *newnode,node *parentnode)
{
    if(newnode->data > parentnode->data)
    {
        if(parentnode->right==NULL)
        {
            parentnode->right = newnode ;
            newnode->parent = parentnode;
            return;
        }
        else
        {
            insertnode(newnode,parentnode->right);
        }
    }
    else
    {
        if(parentnode->left==NULL)
        {
            parentnode->left = newnode ;
            newnode->parent = parentnode;
            return;
        }
        else
        {
            insertnode(newnode,parentnode->left);
        }
    }

}
void preorder(node *p)
{
    if (p==NULL)
    {
        return;
    }
    cout<< p->data<<"\t";
    preorder(p->left);
    preorder(p->right);
}
void postorder(node *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<< p->data<<"\n";
    }
}

void inorder(node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        cout<< p->data<<"\t";
        inorder(p->right);
    }
}
node* searching(int item,node *parentnode)
{
    if(parentnode==NULL)
    {
        cout << "Item is not found\n";
    }
    else
    {
        if(item > parentnode->data)
        {
            searching(item,parentnode->right);
        }
        else if(item < parentnode->data)
        {
            searching(item,parentnode->left);
        }
        else if(item == parentnode->data)
        {
            return parentnode;
        }

    }
}
void DeleteLeafNode(node *p)
{
    if(p->left== NULL && p->right == NULL)
    {
        if(p->parent->left==p)
        {
            p->parent->left=NULL;
        }
        else if(p->parent->right==p)
        {
            p->parent->right=NULL;
        }
        delete p;
    }
}
void DeleteNode(node *p)
{
    if(p->right==NULL && p->left!=NULL)
    {
        /*if(p->parent->left==p)
        {
            p->left->parent=p->parent;
            p->parent->left=p->right;
        }
        else if(p->parent->right==p)
        {
            p->right->parent=p->parent;
            p->parent->right=p->right;
        }


        delete p;*/
        int t = p->data;
        p->data=p->left->data;
        p->left->data = t;
        DeleteLeafNode(p->left);
    }
    else if(p->left==NULL && p->right!=NULL)
    {
        /*if(p->parent->left==p)
        {
            p->parent->left=p->left;
            p->left->parent=p->parent;
        }
        else if(p->parent->right==p)
        {
            p->parent->right=p->left;
            p->left->parent=p->parent;
        }
        delete p;*/
        int t= p->data;
        p->data=p->right->data;
        p->right->data = t;
        DeleteLeafNode(p->right);
    }
    else if(p->left!=NULL && p->right!=NULL)
    {
        node *t;
        t=p->right;
        while(t->left!=NULL)
        {
            t=t->left;
        }
        /*if(p->parent->left==p)
        {
            p->parent->left=t;
            t->right=p->right;
        }
        else if(p->parent->right==p)
        {
            p->parent->right=t;
            t->right=p->right;
        }
        delete p;*/
        int temp;
        temp = p->data;
        p->data = t->data;
        t->data = temp;
        DeleteLeafNode(t);
    }
    else
    {
        DeleteLeafNode(p);
    }
}

int main()
{
    int i;
int a[1000];
    for(int i=0; ; i++)
    {

        cin >> a[i];
if(a[i]==0){
    break;
}
        if(i==0)
        {
            root = CreateNode(a[i]);
        }
        else
        {
            insertnode(CreateNode(a[i]),root);


    }


}
 postorder(root);

}

