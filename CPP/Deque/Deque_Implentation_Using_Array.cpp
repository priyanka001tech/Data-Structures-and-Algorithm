#include<iostream>
using namespace std;
#define SIZE 5
class dequeue
{
    int a[10],front,rear;
    public:
        dequeue();
        void add_at_beg(int);
        void add_at_end(int);
        void delete_fr_front();
        void delete_fr_rear();
        void display();
};
dequeue::dequeue()
{
    front=-1;
    rear=-1;
}
void dequeue::add_at_end(int item)
{
 
    if(rear>=SIZE-1)
    {
        cout<<"\n insertion is not posibble,overflow!!!!";
    }
    else
    {
        if(front==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear=rear+1;
        }
    a[rear]=item;
    cout<<"\nInserted item is"<<a[rear];
    }
}
void dequeue::add_at_beg(int item)
{
 
        if(front==-1)
        {
            front=0;
            a[++rear]=item;
            cout<<"\n inserted element is"<<item;
        }
        else if(front!=0)
        {
            a[--front]=item;
            cout<<"\n inserted element is"<<item;
 
        }
        else
        {
              cout<<"\n insertion is not posibble,overflow!!!";
        }
 
}
void dequeue::display()
{
    if(front==-1)
    {
        cout<<"Dequeue is empty";
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
void dequeue::delete_fr_front()
{
        if(front==-1)
        {
            cout<<"deletion is not possible::dequeue is empty";
            return;
        }
        else
        {
            cout<<"the deleted element is"<<a[front];
            if(front==rear)
            {
                front=rear=-1;
                return;
            }
            else
                front=front+1;
        }
}
void dequeue::delete_fr_rear()
{
        if(front==-1)
        {
            cout<<"deletion is not possible::dequeue is empty";
            return;
        }
        else
        {
            cout<<"the deleted element is"<<a[rear];
            if(front==rear)
            {
                front=rear=-1;
            }
            else
                rear=rear-1;
        }
}
int main()
{
    int c,item;
    dequeue d1;
    do
    {
        cout<<"\n\n***DEQUEUE OPERATION***\n";
        cout<<"\n 1_insert at beginning";
        cout<<"\n 2_insert at end";
        cout<<"\n 3_display";
        cout<<"\n 4_deletion from front";
        cout<<"\n 5_deletion from rear";
        cout<<"\n 6_exit";
        cout<<"\n enter your choice";
        cin>>c;
        switch(c)
        {
            case 1:cout<<"enter the element to be inserted";
                          cin>>item;
                          d1.add_at_beg(item);
                          break;
            case 2:cout<<"enter the element to be inserted";
                         cin>>item;
                        d1.add_at_end(item);
                        break;
            case 3:d1.display();
                        break;
            case 4:d1.delete_fr_front();
                        break;
            case 5:d1.delete_fr_rear();
                      break;
            case 6:exit(1);
                        break;
            csdefault:cout<<"invalid choice";
                    break;
        }
    }
    while(c!=7);
}
