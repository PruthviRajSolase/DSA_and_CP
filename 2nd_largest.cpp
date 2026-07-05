#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int second_largest_element(vector<int> &arr){
        int largest = INT_MIN;
        int second_largest = INT_MIN;

        for(int i=0;i<arr.size();i++){
            int x=arr[i];
            if(x>largest){
                second_largest=largest;
                largest=x;
            }
            else if(x>second_largest && x!=largest){
                second_largest=x;
            }
        }
        return second_largest == INT_MIN ? -1 : second_largest;
    }
};

int main()
{
    vector<int> arr;
    cout<<"Enter the numnbers"<<endl;
    int y_n=0;
    int num;
    while(y_n==0){
        cin>>num;
        arr.push_back(num);
        
        cout<<"Enter 0 to add one more element or else any other number: ";
        cin>>y_n;
    }

    solution obj;
    int ans = obj.second_largest_element(arr);

    cout<<"Second largest element is : "<<ans;


     
    return 0;
}
