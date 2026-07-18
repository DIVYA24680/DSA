#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int small=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
        swap(arr[i],arr[small]);
    }

}
int main(){
    int n=5;
    int arr[]={4,5,1,2,3};
    selection_sort(arr,n);
    printarray(arr,n);
    return 0;
}
