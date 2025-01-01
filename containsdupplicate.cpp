class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>count;

        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        vector<int>result;
        for(auto it=count.begin();it!=count.end();++it){
            if(it->second==2){
                result.push_back(it->first);
            }
        }
        return result;
    }
};