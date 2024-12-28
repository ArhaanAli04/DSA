class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        vector<int>distinct;
        for(auto it=count.begin();it!=count.end();++it){
            if(it->second==1){
                distinct.push_back(it->first);
            }
        }
        sort(distinct.begin(),distinct.end());
        int m=distinct.size();
        if(m<3){
            return distinct[m-1];
        }
        return distinct[m-3];
        
    }
};