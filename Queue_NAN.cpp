#include<bits/stdc++.h>

using namespace std;
int Queue[101];
 int rear =0, front1 =0;

void insert_Queue(int item){
 
    rear = rear +1;
    Queue[rear]=item;
    return;

}

int delete_Queue(){
    

}

void stop(){
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




void main(){

cout<<"########=======================########"<<endl;
cout<<"********.......................********"<<endl;
cout<<"_______ Welcome to Linear Queue________"<<endl;
cout<<"********.......................********"<<endl;
cout<<"########=======================########"<<endl;
 
  
 
   Menu_of_Introduction :
       

   cout<<endl<<endl;
   cout<<"What do you want ?"<<endl;
   cout<<"1.Insert at Queue>>"<<endl;
   cout<<"2.Delete at Queue>>"<<endl;
   cout<<"3.Stop the program"<<endl;
   cout<<endl<<endl;
   cout<<"Press Your Key>>>>>>";
   cin>>option;


   if(option==1){
   insert_Queue();
   }

   else if(option==2){
    delete_Queue();
           }

  else if(option==3){
   stop();

  }

  else{
 goto Menu_of_Introduction ;
   }




}
