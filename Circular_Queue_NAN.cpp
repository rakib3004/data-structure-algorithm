#include<bits/stdc++.h>
using namespace std;
int Queue[101]= {0};
int rear, front,range,item,option,number;


void insert_Queue(int item)
{

    if((front==1&&rear==range)||(rear==range+1))
    {
        cout<<"Overflow??????"<<endl;
        cout<<"Rear:"<<rear<<" && "<<"Front:"<<front<<endl;
        return ;
    }
    else  if(front==0)
    {
        front=1;
        rear =1;

    }
    else if(rear==range)
    {
        rear =1;
    }
    else
    {
        rear ++;
    }


    Queue[rear]=item;
    cout<<item<<" is insert successfully"<<endl;
    cout<<"Rear:"<<rear<<" && "<<"Front:"<<front<<endl;
    return;

}
int delete_Queue()
{
    if(front==0)
    {

        return -1;

    }


    item = Queue[front];


    if(front==rear)
    {
        front=0;
        rear =0;
        return item;
    }
    else if(front==range)
    {
        front=1;
        return item;

    }
    else
    {
        front++;
        return item;

    }



}
void traverse_Queue()
{
    cout<<"|";
    for(int iterator = front ; iterator<=rear ; iterator++)
    {
        iterator = iterator%range;

        cout<<Queue[iterator]<<"|";

    }
    cout<<endl;

}

void stop()
{
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++++++++Thanks!!!!++++++++++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++++++++Good Bye++++++++++++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++Powered By : BSSE1129+++++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++"<<endl;


}


int main()
{

    cout<<"########=======================########"<<endl;
    cout<<"********.......................********"<<endl;
    cout<<"_______ Welcome to Circular Queue________"<<endl;
    cout<<"********.......................********"<<endl;
    cout<<"########=======================########"<<endl;

    int result;
    rear=0,front=0;


    cout<<"Enter the size of your Queue>>>";
    cin>>range;

    cout<<endl<<endl;
Menu_of_Introduction :
    cout<<"What do you want ?"<<endl;
    cout<<"1.Insert at Queue>>"<<endl;
    cout<<"2.Delete at Queue>>"<<endl;
    cout<<"3.Traverse at Queue>>"<<endl;
    cout<<"4.Stop the program"<<endl;
    cout<<endl<<endl;
    cout<<"Press Your Key>>>>>>";
    cin>>option;


    if(option==1)
    {
        cout<<"Enter the number You want to insert>>>";
        cin>>number;

        insert_Queue(number);
    }

    else if(option==2)
    {
        int result = delete_Queue();
        if(result==-1)
        {
            cout<<" Underflow!!!!!!!"<<endl;
            cout<<"Rear:"<<rear<<" && "<<"Front:"<<front<<endl;
        }
        else
        {
            cout<<item<<" is delete successfully!!!!!"<<endl;
            cout<<"Rear:"<<rear<<" && "<<"Front:"<<front<<endl;
        }
    }
    else if(option==3)
    {
        traverse_Queue();
    }
    else if(option==4)
    {
        stop();
        return 0 ;
    }

    else
    {
        goto Menu_of_Introduction ;
    }



    goto Menu_of_Introduction ;
    return 0 ;
}
