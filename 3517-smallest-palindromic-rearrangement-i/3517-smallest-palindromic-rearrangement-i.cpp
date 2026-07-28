class Solution {
public:
    string smallestPalindrome(string s) {
        string sub="";
        for(int i=0;i<(s.length()/2);i++){
            sub+=s[i];
        }
        sort(sub.begin(),sub.end());
        int i=0;
        int j=s.length()-1;

        while(i<j){
            s[i]=sub[i];
            s[j--]=sub[i++];
        }
        return s;
    }
};