#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={3,-4,5,4,-1,8,-8};
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);

        }
    }
    cout<<"Max subarray sum="<<maxsum;
    return 0;
}