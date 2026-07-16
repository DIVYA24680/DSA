#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>nums,int start,int end,int target){
    if(start<=end){
        int mid=start+(end-start)/2;
        if(target<nums[mid]){
            return binary_search(nums,start,mid-1,target);
    }
        else if(target>nums[mid]){
            return binary_search(nums,mid+1,end,target);
    }
        else{
            return mid;
    }
}
 return -1;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int start=0;
    int target =3;
    int end=nums.size()-1;
    int result=binary_search(nums,start,end,target);
    cout<<result;
    return 0;
}