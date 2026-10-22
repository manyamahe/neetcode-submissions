class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        bool ans=true;
        while(i<j){
            // if(s[i]==' '||s[j]==' '){
            //     while(s[i]==' '){
            //         i++;
            //     }
            //     while(s[j]==' '){
            //         j--;
            //     }
            // }
            while (i < j && !isalnum(s[i])) {
                 i++;
            }

            while (i < j && !isalnum(s[j])) {
                 j--;
            }
            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;

            }else{
                ans=false;
                break;
            }
        }
        return ans;
    }
};
