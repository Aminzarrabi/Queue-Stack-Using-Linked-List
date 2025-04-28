#include <iostream>
using namespace std;
int top=0;
struct node
{
    int num,top=0;
    node *next;
}*first,*last;
void push()
{
    node *ptr = new node;
    ptr->next=NULL;
    if(first==NULL)//darj dar ebteda//
        first=last=ptr;
    else//darj dar enteha//
    {
        last->next=ptr;
        last=ptr;
    } 
    cout<<"Enter number to push : ";
    cin>>last->num;
    top++;
}
void show()
{
    node *h;
    if(first==NULL)
        cout<<"\nStack is empty !\n";
    else
    {
        h=first;
        cout<<"\n";
        for(;h!=NULL;)
        {
            cout<<h->num<<" ";
            h=h->next;
        } 
    }    
}
void pop()
{ 
    node *h,*p;
    if(first==NULL)
        cout<<"\nStack is empty !\n";
    else if(top==1)
    {
        first=NULL;
    }
    else
    {
    h=p=first;
    for(int i=0;i<top-1;i++)
    {
        p=h;
        h=h->next;
    }
        p->next=NULL; 
        top--;    
    }

}
void empty()
{
    if(first==NULL)
        cout<<"\nStack is empty !\n";
    else
        cout<<"\nStack is not empty !\n";
}
int main()
{
    int x;
    first=last=NULL;
    for(;;)
    {
        cout<<"\n1.Show stack \n";
        cout<<"2.Empty test \n";
        cout<<"3.Push \n";
        cout<<"4.Pop \n";
        cout<<"5.Exit \n";
        cout<<"\nYour request ? ";
        cin>>x;
        if(x==1)
            show();
        else if(x==2)
            empty();
        else if(x==3)
            push();
        else if(x==4)
            pop();
        else if(x==5)
            {
            cout<<"End"; 
            return 0;
            }
        else
            cout<<"\n( Number invalid ! )\n";
    }
    return 0;
}
