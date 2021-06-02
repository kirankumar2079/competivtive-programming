#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int n)
    {
        data=n;
    }
};

void print_all(node *r)
{
       node *start=r;
                    while(start!=NULL)
                    {
                        cout<<start->data<<endl;
                        start=start->next;
                    }
}

int main()
{
    node *head=new node(0);
    head->next=NULL;
    // cout<<head->data;


        while(1)
        {
            int ch;
            cout<<"1. new node"<<endl<<"2. delete node"<<"0. print and exit"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 0:
                    print_all(head);
                    exit(0);
                    
                case 1:
                    int ele;
                    cout<<"enter the data";
                    cin>>ele;
                    node *temp=new node(ele);
                    temp->next=NULL;
                    if(head->next==NULL)
                    {
                        head->next=temp;
                    }
                    else
                    {
                         node *temp1=head;
                        while(temp1->next!=NULL)
                        {
                            temp1=temp1->next;
                        }
                        temp1->next=temp;

                    }
                    break;

                // case 2:
                 
                //     cout<<"case 2";
                //     break;
                
                // case 3:
                //     node *start=head;
                //     while(start!=NULL)
                //     {
                //         cout<<start->data;
                //         start=start->next;
                //     }
                //     break;






               
            }
        }

    return 0;
}