class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int>ans;
        for(int i=0;i<n-1;i++){
            int remain=target-numbers[i];
            int l=i+1;
            int r=n-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(numbers[mid]==remain){
                   ans.push_back(i+1);
                   ans.push_back(mid+1);
                   break ;
                }else if(numbers[mid]>remain){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
        }
        return ans;

    }
};
