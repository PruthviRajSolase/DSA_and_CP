class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uni=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                uni++;
            }
        }
        vector <int> dup_arr;
        dup_arr.push_back(nums[0]);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                dup_arr.emplace_back(nums[i+1]);
            }
        }
        nums=dup_arr;
        return uni;
        


    }
};