class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<=2){
            if(nums[1]!=1){
                return 1;
            }
            else{
                return 2;
            }
        }
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>1){
                return nums[i]-1;
            }
        }
        return 0;
    }
   
};