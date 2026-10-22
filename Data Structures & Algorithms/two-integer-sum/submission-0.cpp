class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>store;
        for(int i=0;i<nums.size();i++){
            store[nums[i]]=i;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int search=target-nums[i];
            
            for(auto it:store){
                if(it.first==search&&it.second!=i){
                    ans.push_back(i);
                    ans.push_back(it.second);
                    return ans;
                }
            }
        }
        return ans;
    }
};
