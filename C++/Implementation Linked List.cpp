#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start=NULL;

void display()
{
    if(start==NULL)
        return;
    cout<<"->"<<start->data;
    start=start->next;
    display();
}

void create()
{
    int n,first; //n is the number of elements to be put in
    cin>>n;
    cin>>first;
    node *p2=new node;
    p2->data=first;
    p2->next=NULL;
    start=p2;
    for(int i=0;i<n;i++)
    {
        int a; //element  put 
        cin>>a;
        node *y1=new node;
        y1->data=a;
        y1->next=NULL;
        p2->next=y1;
        p2=p2->next;
    }
}
int main()
{
    create();
    cout<<"Linked List:";
    display();
}
