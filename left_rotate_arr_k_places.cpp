#include <bits/stdc++.h>
using namespace std;

class Solution{
    public : 
    void rotate_arr(vector <int> &arr,int k){

        if(arr.empty()) return;
        k %= arr.size();

        vector<int> dup;
        for(int i=0;i<arr.size();i++){
           if(i-k>=0){
            dup.push_back(arr[i]);
           }
        }
        for(int i=0;i<k;i++){
            dup.push_back(arr[i]);
        }
        arr = dup;
        return;

    }
};

int main()
{
    vector <int> nums;
    int num;
    int access = 1;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    cout<<"Enter the numbers"<<endl;
    while(access==1){
        cin>>num;
        nums.push_back(num);
        cout<<"Enter 1 to enter the numbers or else any other number to discontinue: ";
        cin>>access;
    }

    Solution rotation;
    rotation.rotate_arr(nums,k);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}
