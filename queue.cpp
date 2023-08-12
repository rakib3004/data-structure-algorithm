#include<bits/stdc++.h>

using namespace std;

int main(){


queue<int>my_queue;

for(int i=1125;i<=1130;i++){
   my_queue.push(i);
}
my_queue.push(1131);
my_queue.push(1132);

int j;
int size=my_queue.size();

while(!my_queue.empty()){
    cout<<my_queue.front()<<endl;
    my_queue.pop();
}

return 0;

}
