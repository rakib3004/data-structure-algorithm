#include<bits/stdc++.h>

using namespace std;
int Queue[101]={0};
 int rear =0, front1 =0,range=7,item,option,number;

void insert_Queue(int item){


     if(front1==0&&rear==0){
        front1==1;
         rear = rear +1;
         Queue[rear]=item;
             cout<<item+" is insert successfully"<<endl;

     }
     else if((front1==1&&rear==range)||(front1==rear+1)){
           cout<<"Overflow!!!!!!!"<<endl;

    return;
     }

else if(rear==range){
    rear =1;
    Queue[rear] = item;
 cout<<item+" is insert successfully"<<endl;

}
}
int delete_Queue(){

      if(front1==0) {
        cout<<"Underflow!!!!!!!"<<endl;
        return 0 ;
      }

     else if(front1==range){
        front1 = 1;
        return item;
      }
     else if(front1==rear){
        rear =0;
        front1 =0;
        return item;
      }
       item = Queue[front1];
      front1=front1+1;
      return item;
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




int main(){

cout<<"########=======================########"<<endl;
cout<<"********.......................********"<<endl;
cout<<"_______ Welcome to Circular Queue________"<<endl;
cout<<"********.......................********"<<endl;
cout<<"########=======================########"<<endl;

     int result;



    cout<<"Enter the size of your Queue>>>>";
    cin>>range;

   cout<<endl<<endl;
     Menu_of_Introduction :
   cout<<"What do you want ?"<<endl;
   cout<<"1.Insert at Queue>>"<<endl;
   cout<<"2.Delete at Queue>>"<<endl;
   cout<<"3.Stop the program"<<endl;
   cout<<endl<<endl;
   cout<<"Press Your Key>>>>>>";
   cin>>option;


   if(option==1){
       cout<<"Enter the number You want to insert";
   cin>>number;

   insert_Queue(number);
   }

   else if(option==2){
   result = delete_Queue();
   cout<<result+"is delete successfully!!!!!"<<endl;
           }

  else if(option==3){
   stop();
return 0 ;
  }

  else{
 goto Menu_of_Introduction ;
   }



goto Menu_of_Introduction ;
return 0 ;
}

