#include<bits/stdc++.h>

using namespace std;

int main(){


priority_queue<int>my_priority_queue;

my_priority_queue.push(104);
my_priority_queue.push(415);
my_priority_queue.push(24);
my_priority_queue.push(45);
my_priority_queue.push(154);
my_priority_queue.push(46);

while(!my_priority_queue.empty()){
    cout<<my_priority_queue.top()<<endl;
    my_priority_queue.pop();

}



return 0;

}
