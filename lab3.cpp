
#include<bits/stdc++.h>

using namespace std;

struct Person{
    int priority;
    Person *prev,*next;
};

Person *head,*tail;


void creat_Queue(){
    head = NULL;
    tail = NULL;
}

Person *creat_data(int priority){
    Person *new_person = new Person;
    new_person->priority = priority;
     new_person->prev = NULL;
    new_person->next = NULL;
    return new_person;

}
Person* search_priority(int data){

    for(Person * iterator = head ;iterator!=NULL; iterator=iterator->next){
        if(iterator->priority > data){
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

}

void traverse_at_Queue(){
    int summation = 0;
    Person * iterator ;

    int sum=0;
    sum=head->priority + head->next->priority;
    summation=sum;
     for( iterator = head->next->next ;iterator!=NULL; iterator=iterator->next){
       sum= iterator->priority + sum;
       summation = summation+sum;

    }
    cout<<summation<<endl;
}


void insert_at_Queue(int item){

    int person_priority = item;



Person * nextious = search_priority(person_priority);
Person * new_person = creat_data(person_priority);

insertBeforeNode( nextious , new_person);


}

int main(){
    D:
int n;

cin>>n;
if(n==0){
    return 0;
}
int an;
int i;
for(i=0;i<n;i++){
  cin>>an;
  insert_at_Queue(an);
}
traverse_at_Queue();

goto D;

}
