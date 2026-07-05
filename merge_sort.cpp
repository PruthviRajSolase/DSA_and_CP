#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> dup_arr;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            dup_arr.emplace_back(arr[i]);
            i++;
        }
        else{
            dup_arr.emplace_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        dup_arr.emplace_back(arr[i]);
        i++;
    }
    while(j<=high){
        dup_arr.emplace_back(arr[j]);
        j++;
    }
    for(int k=0;k<dup_arr.size();k++ ){
        arr[k+low]=dup_arr[k];
    }
    
}
void ms(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid = (high+low)/2;

    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

vector <int> arr = {38, 27, 43, 3, 9, 82, 10};
ms(arr,0,arr.size()-1);
cout<<"The Sorted array is"<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

    return 0;
}