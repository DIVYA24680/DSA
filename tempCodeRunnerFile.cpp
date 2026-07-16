#include<iostream>
#include<vector>
using namespace std;
int rotated(vector<int>nums,int target,int start,int end){
    while(start<=end){
        int mid=start+(end-start)/2;
        if (nums[mid]==target){
            
            return mid;
        
        } 
        else if (nums[start]<=nums[mid]){
            
            if(nums[mid]<target){ 
                end=mid-1;
            }
            else if(nums[mid]>target){
                start=mid+1;
            }
            else{
                return mid;
            }
        }
        else  {
             
            if(nums[mid]<target){
                start=mid+1; 
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
         

        
     }
     return -1;
    
     
}
int main(){
    vector<int>nums={4,5,1,2,3};
    int start=0;
    int target=2;
    int end=nums.size()-1;
    cout<<rotated( nums, target, start, end);
    return 0; 
}