class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr_count(n,0);
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    
                    arr_count[i]++;   
                }
            }
        }
        //now return index of majority element
        for(int i=0;i<n;i++){
            if(arr_count[i]+1> n/2){
                return nums[i];
            }
        }
        return 0;
    }
};