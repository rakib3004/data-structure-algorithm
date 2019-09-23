#include<bits/stdc++.h>

using namespace std;

int main(){


stack<int>my_stack;

for(int i=1125;i<=1130;i++){
   my_stack.push(i);
}
my_stack.push(1131);
my_stack.push(1132);

int j;
int size=my_stack.size();

while(!my_stack.empty()){
    cout<<my_stack.top()<<endl;
    my_stack.pop();
}

return 0;

}
