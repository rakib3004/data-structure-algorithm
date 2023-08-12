#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *prev,*next;
};
Node *head, *tail;

void creatLinkList(){
 head =NULL;
    tail =NULL;
}
Node * creatNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
Node* searchNode(int value){
    for(Node * current = head ; current != NULL; current=current->next) {
         if(current->data==value)  {
            return current;
         }
    }

         return NULL;
}

void insertAtBeginning(Node *newNode){

    if(head==NULL&&tail==NULL){
     head = newNode;
     tail = newNode;
                   }

 else{
       newNode->next = head;
        head->prev = newNode;
        head = newNode;
        }
        cout<<"insert successfully!!!!"<<endl;
            }
void insertAtEnding(Node *newNode){

        if(head==NULL&&tail==NULL) {
        head = newNode;
        tail = newNode;
                         }
    else{
         newNode->prev = tail;
         tail->next = newNode;
         tail = newNode;
                 }
        cout<<"insert successfully!!!!"<<endl;
                    }

void insertAfterNode(Node* previous ,Node* newNode){
         if(previous==tail){
            newNode->next =NULL;
            newNode->prev= previous;
            previous->next = newNode;
         }
  else{
  newNode->next =previous->next;
  newNode->prev= previous;
  previous->next->prev = newNode;
  previous->next = newNode;
        }
}
void insertBeforeNode(Node* nextious ,Node* newNode){
         if(nextious==head){
            newNode->prev = NULL;
            newNode->next =nextious;
            nextious->prev = newNode;
         }
     else{
  newNode->prev = nextious->prev;
  newNode->next =nextious;
  nextious->prev->next =newNode;
  nextious->prev = newNode;
     }
}

void  traverseForward(){
for(Node * current = head ; current != NULL; current= current->next) {
    cout<<current->data<<" ";
    }
    cout<<endl;
                }

void traverseBackward(){

    for(Node* current = tail ; current != NULL; current= current->prev){
     cout<<current->data<<" ";
    }
   cout<<endl;
  }

void deleteFirstdNode()
{

    if(head==NULL){
     cout<<"nothing found to delete";
      return;
    }
    Node * NodeToDelete = head;
    head = head->next ;
    delete NodeToDelete;
    if(head!=NULL)
        head->prev = NULL;
        else tail =NULL;
cout<<"delete successfully!!!!"<<endl;
}

void deleteLastdNode()
{

    if(tail==NULL){
    cout<<"nothing found to delete ????";
      return;
    }
    Node * NodeToDelete = tail;
    tail = tail->prev ;
    delete NodeToDelete;
    if(tail!=NULL)
        tail->next = NULL;
        else head =NULL;
cout<<"delete successfully!!!!"<<endl;
}

void deleteMiddleNode(int value){
     Node* NodeToDelete = searchNode(value);
     if(NodeToDelete==head){
      deleteFirstdNode();
     }
     else if(NodeToDelete==tail){
        deleteLastdNode();
     }
else if(NodeToDelete!=NULL){
        NodeToDelete->prev->next = NodeToDelete->next;
        NodeToDelete->next->prev = NodeToDelete->prev;
        delete NodeToDelete;
        cout<<"delete successfully!!!!"<<endl;
    }
 else {
    cout<<"nothing found to delete ????"<<endl;
 }

}
void searchValue(int value){
    for(Node * current = head ; current != NULL; current=current->next) {
         if(current->data==value)  {
           cout<<"find the value !!!!!"<<endl;
           return;
         }
         }
         cout<<"value not found?????"<<endl;
          return;

}
void searchPosition(int value){
   int count1=1;
    for(Node * current = head ; count1<=value; current=current->next,count1++) {
         if(count1==value)  {
           cout<<" the value is :"<<current->data<<"!!!!!"<<endl;
           return;
         }

         }
}


int main(){

cout<<"======================================="<<endl;
cout<<"***************************************"<<endl;
cout<<"________Welcome to this program________"<<endl;
cout<<"***************************************"<<endl;
cout<<"======================================="<<endl;

 int i,n,input,option,previousNode,nextNode;
 creatLinkList();
   Menu_of_Introduction :

   cout<<endl<<endl;
   cout<<"What do you want ?"<<endl;
   cout<<"1.traverse from forward>>"<<endl;
   cout<<"2.traverse from backward>>>"<<endl;
   cout<<"3.insert at beginning >>>>>>>>"<<endl;
   cout<<"4.insert at ending >>>>>>>>>>>>>>"<<endl;
   cout<<"5.insert at after node >>>>>>>>>>>>"<<endl;
   cout<<"6.insert at before node >>>>>>>>>>>>>>"<<endl;
   cout<<"7.delete at beginning >>>>>>>>>>>>>>>>>>>"<<endl;
   cout<<"8.delete at ending >>>>>>>>>>>>>>>>>>>"<<endl;
   cout<<"9.delete middle node >>>>>>>>>>>>>>"<<endl;
   cout<<"10.search by value>>>>>>>>>>>>>>"<<endl;
   cout<<"11.search by position >>>>>>>"<<endl;
   cout<<"12.close the program.>>>>"<<endl;
   cout<<endl<<endl;

   cout<<"Press Your Key>>>>>>";
   cin>>option;
   if(option==1){
    traverseForward();
   }

   else if(option==2){
    traverseBackward();
           }

  else if(option==3){
    cout<<"Now start insert at beginning program........."<<endl<<endl;
    cout<<"How many numbers you want to"<<endl;
    cout<<"insert at beginning >>>>";
    cin>>n;
    cout<<"Please put your input :"<<endl;
    for(i=0; i<n; i++) {
    cout<<i+1<<"th element>>";
    cin>>input;
    insertAtBeginning(creatNode(input));
    }
           }

  else if(option==4){
    cout<<"Now start insert at ending program........."<<endl<<endl;
    cout<<"How many numbers you want to "<<endl;
    cout<<"insert at ending >>>>";
    cin>>n;
    cout<<"Please put your input :"<<endl;
    for(i=0; i<n; i++){
    cout<<i+1<<"th element>>";
    cin>>input;
    insertAtEnding(creatNode(input));
    }
           }

  else if(option==5){
        cout<<"Now start insert at after node program........."<<endl<<endl;
        cout<<"How many numbers you want to "<<endl;
        cout<<"insert at after node >>>>";
        cin>>n;
        cout<<"Please put your input :"<<endl;
        for(i=1;i<=n;i++){
        cout<<"enter value of previous node>>>>";
        cin>>previousNode;
        cout<<i<<"th element>>";
        cin>>input;
        Node *temp = searchNode(previousNode);
        Node *newNode =creatNode(input);
        if(temp!=NULL){
        insertAfterNode(temp,newNode);
        cout<<"insert successfully!!!!"<<endl;
        }
        else{
        cout<<"node not found ????"<<endl;
        }
           }
              }

  else if(option==6){
        cout<<"Now start insert at before node program........."<<endl<<endl;
        cout<<"How many numbers you want to "<<endl;
        cout<<"insert at before node >>>>";
        cin>>n;
        cout<<"Please put your input :"<<endl;
        for(i=1;i<=n;i++){
        cout<<"enter value of next node>>>>";
        cin>>nextNode;
        cout<<i<<"th element>>";
        cin>>input;
        Node *temp = searchNode(nextNode);
        Node *newNode =creatNode(input);
        if(temp!=NULL){
        insertBeforeNode(temp,newNode);
        cout<<"insert successfully!!!!"<<endl;
        }
        else{
        cout<<"node not found ????"<<endl;
        }
           }
                }

else if(option==7){
    cout<<"Now start delete at beginning program........."<<endl<<endl;
    cout<<"How many numbers you want to "<<endl;
    cout<<"delete at beginning >>>>";
    cin>>n;
    cout<<"Please put your input :";
    for(i=1;i<=n;i++){
    cout<<endl<<i<<"th element>>";
    deleteFirstdNode();
    }
           }

  else if(option==8){
       cout<<"Now start delete at ending program........."<<endl<<endl;
    cout<<"How many numbers you want to "<<endl;
    cout<<"delete at ending >>>>";
    cin>>n;
    cout<<"Please put your input :";
    for(i=n;i>=1;i--){
    cout<<endl<<i<<"th element>>";
        deleteLastdNode();
            }
                }
  else if(option==9){
 cout<<"Now start delete at middle program........."<<endl<<endl;
    cout<<"How many numbers you want to "<<endl;
    cout<<"delete at middle >>>>";
    cin>>n;
    cout<<"Please put your input :";
    for(i=1;i<=n;i++){
    cout<<endl<<"Enter the value you want to delete:";
    cin>>input;
    cout<<i<<"th element>>";
    deleteMiddleNode(input);
    }
           }


   else if(option==10){
 cout<<"Now start search by value program........."<<endl<<endl;
    cout<<"How many numbers you want to "<<endl;
    cout<<"search by value >>>>";
    cin>>n;
    cout<<"Please put your input :";
    for(i=1;i<=n;i++){
    cout<<endl<<"Enter the value you want to search :";
    cin>>input;
    cout<<i<<"th element>>";
    searchValue(input);
    }
           }


  else if(option==11){
 cout<<"Now start search by position program........."<<endl<<endl;
    cout<<"How many numbers you want to "<<endl;
    cout<<"search by position  >>>>";
    cin>>n;
    cout<<"Please put your input :";
    for(i=1;i<=n;i++){
    cout<<endl<<"Enter the position you want to search :";
    cin>>input;
    cout<<i<<"th element>>";
       searchPosition(input);
    }
           }

  else if(option==12){

          cout<<"+++++++++++++++++++++++++++++++"<<endl;
          cout<<"+++++++++++Thanks!!!!++++++++++"<<endl;
          cout<<"+++++++++++++++++++++++++++++++"<<endl;
          cout<<"+++++++++++++++++++++++++++++++"<<endl;
          cout<<"+++++++++++Good Bye++++++++++++"<<endl;
          cout<<"+++++++++++++++++++++++++++++++"<<endl;
          cout<<"+++++++++++++++++++++++++++++++"<<endl;
          cout<<"+++tarafder++informatics++ltd++"<<endl;
          cout<<"+++++++++++++++++++++++++++++++"<<endl;

          return 0;

           }

          cout<<endl<<endl;
    goto Menu_of_Introduction ;
}
