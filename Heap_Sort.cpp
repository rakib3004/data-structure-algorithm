#include<bits/stdc++.h>
using namespace std;
int array[100];

int parent(int iterator)
{
    return iterator/2;
}
int left_leaf(int iterator)
{
    return iterator*2;
}
int right_leaf(int iterator)
{
    return iterator*2+1;
}

    void heapify(int array[],int iterator,int heap_size){

        int left,right;
        left =left_leaf(iterator) ;
        right =right_leaf(iterator);

        int largest;
        if((left<=heap_size)&&(array[left]>array[iterator])){
          largest = left;
        }
        else{
            largest = iterator;
        }

        if(right<=heap_size&&array[right]>array[largest]){
            largest =right;
        }

        if(largest!=iterator){
            swap(array[iterator],array[largest]);
            heapify(array,largest,heap_size);
        }
        else{
            return ;
        }

    }
    void bulid_heap( int array[],int heap_size){


      int iterator;
      for(iterator=(heap_size/2);iterator>=1;iterator--){
         heapify(array,iterator,heap_size);
      }
    }


    void heap_sort(int array[],int heap_size){
               int iterator;
       bulid_heap(array,heap_size);
       for(iterator=heap_size;iterator>=2;iterator--){
        swap(array[1],array[iterator]);
        heap_size--;
        heapify(array,1,heap_size);
       }
    }
int main()
{
    int iterator;
int heap_size;
cout<<"How many number you want to enter into heap :";
cin>>heap_size;

    for(iterator=1;iterator<=heap_size;iterator++)
    {   cout<<iterator<<"th element :";
        cin>>array[iterator];
        cout<<endl;
    }

    bulid_heap(array,heap_size);
    heap_sort(array,heap_size);

    cout<<"Heap Sort Complete!!!!!!!"<<endl;
    cout<<"Sorted element are ::::::"<<endl;
    for(iterator=1;iterator<=heap_size;iterator++)
    {
cout<<array[iterator]<<endl;
    }

    return 0;
}
