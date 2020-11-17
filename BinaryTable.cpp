#include<bits/stdc++.h>
using namespace std;

struct binary{

string zeroOne;
int axix[100];
};

struct isco{
int x1,y1,x2,y2,x3,y3;
bool iot;
};
void iitcpc(){
int n,m;
int time=0;
cin>>n>>m;


binary bin[n];

isco iso[40000];

int k=0;

int i,j;
int product = 0;

for(i=0;i<n;i++){
    cin>>bin[i].zeroOne;

            for(j=0;j<m;j++){
            if(bin[i].zeroOne[j]=='1'){
                bin[i].axix[j]=1;
                product++;
            }
            }

}


editorial :

for(i=0;i<n;i++){
        for(j=0;j<m;j++){

if(bin[i].zeroOne[j]=='1'&&bin[i].zeroOne[j+1]=='1'&&bin[i+1].zeroOne[j+1]=='1'){
        iso[k].x1=i;
        iso[k].y1=j;
        iso[k].x2=i;
        iso[k].y2=j+1;
        iso[k].x3=i+1;
        iso[k].y3=j+1;
            k++;

     bin[i].axix[j]=0;
     bin[i].axix[j+1]=0;
     bin[i+1].axix[j+1]=0;

     product-=3;

      bin[i].zeroOne[j]='0';
     bin[i].zeroOne[j+1]='0';
     bin[i+1].zeroOne[j+1]='0';
}

else if(bin[i].zeroOne[j]=='1'&&bin[i+1].zeroOne[j]=='1'&&bin[i].zeroOne[j+1]=='1'){

        iso[k].x1=i;
        iso[k].y1=j;
        iso[k].x2=i+1;
        iso[k].y2=j;
        iso[k].x3=i;
        iso[k].y3=j+1;
            k++;

     bin[i].axix[j]=0;
     bin[i+1].axix[j]=0;
     bin[i].axix[j+1]=0;

          product-=3;


     bin[i].zeroOne[j]='0';
     bin[i+1].zeroOne[j]='0';
     bin[i].zeroOne[j+1]='0';
}
else if(bin[i].zeroOne[j+1]=='1'&&bin[i+1].zeroOne[j]=='1'&&bin[i+1].zeroOne[j+1]=='1'){
        iso[k].x1=i;
        iso[k].y1=j+1;
        iso[k].x2=i+1;
        iso[k].y2=j;
        iso[k].x3=i+1;
        iso[k].y3=j+1;
            k++;

     bin[i].axix[j+1]=0;
     bin[i+1].axix[j]=0;
     bin[i+1].axix[j+1]=0;

          product-=3;

     bin[i].zeroOne[j+1]='0';
     bin[i+1].zeroOne[j]='0';
     bin[i+1].zeroOne[j+1]='0';
}
else if(bin[i].zeroOne[j]=='1'&&bin[i+1].zeroOne[j]=='1'&&bin[i+1].zeroOne[j+1]=='1'){
        iso[k].x1=i;
        iso[k].y1=j;
        iso[k].x2=i+1;
        iso[k].y2=j;
        iso[k].x3=i+1;
        iso[k].y3=j+1;
            k++;

     bin[i].axix[j]=0;
     bin[i+1].axix[j]=0;
     bin[i+1].axix[j+1]=0;

          product-=3;

     bin[i].zeroOne[j]='0';
     bin[i+1].zeroOne[j]='0';
     bin[i+1].zeroOne[j+1]='0';
}
else{
    continue;
}

}

}



    cout<<k<<endl;

for(i=0;i<k;i++){

    cout<<(iso[i].x1+1)
    <<" "<<(iso[i].y1+1)
    <<" "<<(iso[i].x2+1)
    <<" "<<(iso[i].y2+1)
    <<" "<<(iso[i].x3+1)
    <<" "<<(iso[i].y3+1)<<endl;
}


}
int main(){

int t;


cin>>t;

while(t--){

    iitcpc();
}

return 0;
}
