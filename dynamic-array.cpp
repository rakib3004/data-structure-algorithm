
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {

            int n;
           int *arr=NULL;
           cin>>n;
           arr = new int[n];
           int i;
           for(i=0;i<n;i++)   {   
           cin>>arr[i];
           }

           int * arr2=NULL;
           arr2 = new int[2*n];

           for(i=0;i<n;i++)
           {
             arr2[i]=arr[i];
           }
           delete [ ]arr;
           for(i=n;i<2*n;i++)
           {
               cin>>arr2[i];
           }

           for(i=0;i<2*n;i++)
           {
           cout<<arr2[i]<<" ";
           }
           
    return 0;
}


