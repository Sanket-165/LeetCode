class Solution {
public:
    int smallestNumber(int n, int t) {
        
        if((n%10)==0) return n;
        while(true){
            string s = to_string(n);
            int pro=1;
            for(int i=0;i<s.length();i++){
                pro*=(s[i]-'0');
            }
            if((pro%t)==0) return n;

            n++;
         }
        return 0;
    }
};