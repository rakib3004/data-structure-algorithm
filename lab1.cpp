#include<bits/stdc++.h>

using namespace std;

int main(){
int number;
cin>>number;
string s;
int i;
int n;
while(number--){
        int flag=0;

   char queue[256];
int j=0;

  cin>>s;
  n= s.size();

 for(i=0;i<n;i++){
    if(s[i]=='('||s[i]=='['){

        j++;
    queue[j]=s[i];//push

       }
       else if(s[i]==')'){
        if(queue[j]=='('){
            j--;//pop
           }
           else{
            cout<<"No"<<endl;
            flag=-1;
            break;
           }
       }
    else if(s[i]==']'){
        if(queue[j]=='['){
            j--;//pop
           }
           else{
             cout<<"No"<<endl;
             flag=-1;
                       break;

           }
       }
 }

if(j==0&&flag==0){
  cout<<"Yes"<<endl;
}
else{
   cout<<"No"<<endl;
}



}


return 0;

}

