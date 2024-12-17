class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int result;
        for(int i=0;i<nums.size();++i){
            for(int j=i;j<nums.size();++j){
                if(nums[i]==nums[j]){
                    result=nums[i];
                }
            }
        }
        return result ;
    }
};