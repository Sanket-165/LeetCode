class Solution {
public:
    string smallestPalindrome(string s) {
       sort(s.begin(),s.begin()+(s.length()/2));
       int i=0;
       int j = s.length()-1;

       while(i<j){
        s[j--]=s[i++];
       }
       return s;
    }

};