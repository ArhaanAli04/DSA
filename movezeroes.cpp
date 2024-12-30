class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        int m=count.count(0)? count[0]: 0;
        
        for(int i=0;i<n-m;i++){
            nums[i]=nums[i+m];
        }
        for(int i=n-1;i>=n-m;i--){
            nums[i]=0;
        }
        
    }
};