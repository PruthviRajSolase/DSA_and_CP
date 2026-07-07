#include <bits/stdc++.h>
using namespace std;
int pivot_pt(vector<int> &arr, int start, int end) {
    int pivot = arr[start];
    int i = start+1;
    int j = end;

    while (i < j) {

        while (i <= end - 1 && arr[i] <= pivot)
            i++;

        while (j >= start + 1 && arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[start], arr[j]);
    return j;
}
void qs(vector <int> &arr ,int start,int end){
    
    if(start<end){
        int pivot=pivot_pt(arr,start,end);
        qs(arr,start,pivot-1);
        qs(arr,pivot+1,end);
    }
    return;

}

int main()
{
    int acc=0;
    int num;
    vector <int> arr;
    cout<<"Enter the elements";
    while(acc==0){
        cin>>num;
        arr.push_back(num);
        cout<<"Enter 0 to enter the element or else type any other number: "<<endl;
        cin>>acc;
    }

    qs(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
