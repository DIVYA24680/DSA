#include<iostream>
using namespace std;
#include <vector>
 
int main(){
    vector<int>nums={3 ,4,5,7,8,9};
    int start=0;
    int found=0;
    int target =8;
    int end=nums.size()-1;
    int mid;
    
    while(start<=end){
        mid=(start+end)/2;//in platform size will be big there we have to use mis=start+(end_start)/2
        if(target<nums[mid]){
            start=start;
            end=mid-1;

        }
        else if(target>nums[mid]){
            start=mid+1;
            end=end;

        }
        else{
            found=mid;
            break;
        }


       
    }
    cout<<found<<endl; 
}
 