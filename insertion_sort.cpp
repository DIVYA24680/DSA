#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;

        }

        arr[prev+1]=curr;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}  
int main(){
    int n=5;
    int arr[]={4,5,1,2,3};
    insertion_sort(arr,n);
    printarray(arr,n);
    return 0;
}
