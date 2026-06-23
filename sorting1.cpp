class Solution {
public:

         void swap(int &a,int &b){
                    int temp;
                    temp=a;
                    a=b;
                    b=temp;

                }

    vector<int> selectionSort(vector<int>& nums) {
               
            for(int i=0;i<=nums.size()-2;i++){
                int mini = i;
                for(int j=i;j<=nums.size()-1;j++){
                    if(nums[mini]>nums[j]){
                        mini=j;
                    }
                }
                swap(nums[i],nums[mini]);
            }

            return nums;
    }
};
