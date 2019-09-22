#include<bits/stdc++.h>

using namespace std;

struct Person{
    string name;
    int priority;
    Person *prev,*next;
};

Person *head,*tail;


void creat_Queue(){
    head = NULL;
    tail = NULL;
}

Person *creat_data(string name,int priority){
    Person *new_person = new Person;
    new_person->name= name;
    new_person->priority = priority;
     new_person->prev = NULL;
    new_person->next = NULL;
    return new_person;

}
Person* search_priority(int data){

    for(Person * iterator = head ;iterator!=NULL; iterator=iterator->next){
        if(iterator->priority<data){
            return iterator;
        }
    }
    return NULL;

}

void insertBeforeNode(Person* nextious ,Person* new_person){

      if(head==NULL&&tail==NULL){
             head = new_person;
             tail = new_person;
        }

        else if(nextious==head){
                head = new_person;
            new_person->prev = NULL;
            new_person->next =nextious;
            nextious->prev = new_person;
         }
         else if(nextious==NULL){
             new_person->prev = tail;
             tail->next = new_person;
          tail = new_person;

         }
     else{
          new_person->prev = nextious->prev;
          new_person->next =nextious;
          nextious->prev->next =new_person;
          nextious->prev = new_person;

     }
     cout<<endl<<endl<<new_person->name<<" is insert successfully!!!!"<<endl<<endl<<endl;

}



void insert_at_Queue(){

    string person_name;
    int person_priority;
    cout<<endl<<"Enter person name>>>>>";
    cin>>person_name;
    cout<<endl<<"Enter person priority>>>>>";
    cin>>person_priority;


Person * nextious = search_priority(person_priority);
Person * new_person = creat_data(person_name,person_priority);

insertBeforeNode( nextious , new_person);


}

void  traverse_at_Queue(){

    for(Person * iterator = head ; iterator!=NULL;iterator = iterator->next){
        cout<<"Name : "<<iterator->name<<"||"<<"Priority : "<<iterator->priority<<endl;
    }
    cout<<endl<<endl<<endl;
}

int main(){

    cout<<"________________________"<<endl;
    cout<<"________________________"<<endl;
    cout<<"=========Welcome========"<<endl;
    cout<<"===**======to=====**===="<<endl;
    cout<<"===**===Priority==**===="<<endl;
    cout<<"==========Queue========="<<endl;
    cout<<"________________________"<<endl;
    cout<<"________________________"<<endl;

    creat_Queue();


    Menu_of_Queue :

       int option;
    cout<<"What do you want????"<<endl;
    cout<<"1.Insert at Priority Queue----->"<<endl;
    cout<<"2.Traverse at Priority Queue--->"<<endl;
    cout<<"3.Stop the process------------->"<<endl;

    cout<<endl<<endl;
    cout<<"Choose your option : ";
    cin>>option;

    if(option==1){

      insert_at_Queue();
    }
    else if(option==2){
        traverse_at_Queue();

    }

    else if(option==3){

        return 0;
    }
    else{
        goto Menu_of_Queue ;
    }

           goto Menu_of_Queue ;



}
