#include <iostream>
using namespace std;
int main(){
      int currsum=0;
      int maxsum=INT_MIN;
      int n=5;
      int arr[]={3,-4,5,4,-1,7,-8};
      for(int i=0;i<7;i++){
        currsum+=arr[i];
        maxsum= max (currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum;
    return 0;
    
 }