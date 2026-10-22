class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int max_f=INT_MIN;
        int max_no;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            
        }
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        //priority_queue<pair<int, int>>pq;
           for(auto it:m){
             pq.push({it.second,it.first});
             if(pq.size()>k){
                pq.pop();
             }
           }
           while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
           }
           return ans;
    }
};
