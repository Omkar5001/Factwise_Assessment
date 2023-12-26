#include<iostream>
using namespace std; 

int main(){
    int nums[4]={1,3,5,6};
    int target=5;

    for(int i =0;i < 4;i++){
        if(nums[i] == target){
            cout<<i<<endl; // target is present
        }
    }
    for(int i =0;i < 4;i++){
        if(nums[i] > target){
            cout<<i-1<<endl; // target is not present, Target should be at this position
        }
    }
    return 0;
}