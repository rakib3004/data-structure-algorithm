#include<bits/stdc++.h>
using namespace std;
void  message(){


cout<<"Candidates are :"<<endl;
cout<<"1.Siam\n2.Noshin"<<endl;
cout<<"3.Arif\n4.Alif\n5.Saad\n6.Shafiq\n7.Tasmia"<<endl<<endl;
cout<<"Choose Your Candidates :"<<endl;
}

int main(){
    int final_key=1;
int candidates[8]={0};

  int key=0;
int balote;
int choice,choice2;

     Induction :
         balote=1;

Rotation :
cout<<"\t\t\t\t\tWelcome to IIT Election Commission"<<endl;
cout<<"\t\t\t\t\tIIT 11 th batch CR election 2019-2020"<<endl;
       cout<<"Student No : "<<final_key<<"    Vote No : "<<balote;
    message();

    if(balote ==1){
       cin>>choice;

        cout<<"Are you sure ??"<<endl;
        cout<<"1.Yes"<<endl;
        cout<<"2.No"<<endl;
        cout<<"Press the Key ::::  "<<endl;
        cin>>key;
        if(key==1){
            candidates[choice]++;
            balote++;
            goto Rotation;

        }
        else if(key==2){
            goto Rotation;
        }

    }
    else if(balote==2){

      cin>>choice2;
      if(choice==choice2){
        cout<<"You Repeat !!!!!"<<endl;
        goto Rotation;
      }

        cout<<"Are you sure ??"<<endl;
        cout<<"1.Yes"<<endl;
        cout<<"2.No"<<endl;
        cout<<"Press the Key ::::  "<<endl;
        cin>>key;
        if(key==1){
            candidates[choice]++;
            final_key++;

        }
        else if(key==2){
            goto Rotation;
        }
    }
          if(final_key!=33){

            goto Induction;
          }
          else{
            return 0;
          }


}
