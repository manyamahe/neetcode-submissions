class Solution {
public:
    int maxArea(vector<int>& heights) {
        int m=INT_MIN;
        int i=0;
        int j=heights.size()-1;
        while(i<j){
             int h;
             if(heights[i]<heights[j]){
                m=max(m,heights[i]*(j-i));
                i++;
             }else{
                m=max(m,heights[j]*(j-i));
                j--;
             }
        }
        return m;
    }
};
