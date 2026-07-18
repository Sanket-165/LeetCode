class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int tmp=b;
            b= a%b;
            a=tmp;
        }

        return a;
    }
    int findGCD(vector<int>& nums) {
        int maxNum =0;
        int minNum = 1000;
        for(int num : nums){
            maxNum = max(maxNum,num);
            minNum = min(minNum,num);


        }

        return gcd(maxNum,minNum);
    }
};