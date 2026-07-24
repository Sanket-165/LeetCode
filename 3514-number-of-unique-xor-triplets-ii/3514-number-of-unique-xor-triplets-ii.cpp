class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
       int maxi = 2048;
        vector<bool>pr(maxi,false);
        vector<bool>tr(maxi,false);
       for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            pr[nums[i]^nums[j]]=true;
        }
       }

       for(int i=0;i<maxi;i++){
        if(!pr[i]) continue;

        for(int j=0;j<nums.size();j++){
            tr[i^nums[j]]=true;
        }
       }

       int ans=0;

       for(int i=0;i<maxi;i++){
        if(tr[i]) ans++;
       }
        return ans;
    }
};