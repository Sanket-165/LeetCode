class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> arr(n,0);

        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>maxDiff) arr[i]=1;
        }

        for(int i=1;i<n;i++)
         arr[i]+=arr[i-1];

        vector<bool>ans;

        for(auto& q:queries){
            int l=min(q[0],q[1]);
            int r=max(q[0],q[1]);

            if(arr[r]-arr[l]==0) ans.push_back(true);
            else ans.push_back(false);
        }

        return ans;
    }
};