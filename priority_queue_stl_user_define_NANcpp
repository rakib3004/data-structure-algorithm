#include<bits/stdc++.h>

using namespace std;
struct people{
    int roll;
    int priority;

    bool operator<(const people &p) const
    {
        if(priority==p.priority){
            return roll>p.roll;
        }
     return priority>p.priority;
    }

};

int main(){


//    bool operator()(const int &a, const int &b) const
//    {
//        return a>b;
//    }


priority_queue<people>pq;

people people1,people2,people3;

people1.roll = 101;
people1.priority =1;
people2.roll =102;
people2.priority=3;
people3.roll=103;
people3.priority=2;


pq.push(people1);
pq.push(people2);
pq.push(people1);


while(!pq.empty()){

people temp = pq.top();
cout<<temp.roll<<endl;
cout<<temp.priority<<endl;
pq.pop();

}
return 0;

}
