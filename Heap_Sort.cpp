#include<bits/stdc++.h>
using namespace std;

    void heapify(int array[],int iterator,int heap_size){

        int left,right;
        left = array[iterator-1];
        right = array[iterator+1];
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
            heapify(array[],largest);
        }
        else{
            return ;
        }

    }
    void bulid_heap( int array[]){
        
     int array_size,heap_size;
      array_size=7;
      heap_size=array_size;
      int iterator;
      for(iterator=(array_size/2);iterator>=1;iterator--){
         heapify(array[],iterator,heap_size);

      }
    
    }
    void heap_sort(int array_size){
               int iterator;
               int heap_size=array_size;
       bulid_heap(array[],array_size);
       for(iterator=array_size;iterator>=2;iterator--){         
        swap(array[1],array[iterator]);
        heap_size--;
        heapify(array[],1);
                
       }
       
       
       
    }
    
int main(){

   int array[7]={10,7,13,5,6,4,9};          
int array_size;
      array_size=7;
      heap_sort(array[],array_size);

return 0;
}
