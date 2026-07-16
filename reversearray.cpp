#include <iostream>
using namespace std;
int reversearray(int arr[],int size){
    int start=0;
    int end=size-1;
    int temp;
    while(start!=end&& start+1!=end){
           swap(arr[start],arr[end]);
           start++;
           end--;
             
    }
    return 0;
}
int main() {
    int size=4;
    int arr[]={1,2,3,4};
    reversearray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}