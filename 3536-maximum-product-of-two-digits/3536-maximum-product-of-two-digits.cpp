class Solution {
public:
    int maxProduct(int n) {
        vector<int>dig;

        while(n>0){
            dig.push_back(n%10);
            n/=10;
        }
        sort(dig.begin(),dig.end());

        int m = dig.size();

        return dig[m-1]*dig[m-2];
        
    }
};