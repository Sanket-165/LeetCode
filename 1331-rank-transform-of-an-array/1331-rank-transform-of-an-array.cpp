class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return {};
        vector<int>arr2=arr;

        sort(arr.begin(),arr.end());
        int rank=1;
        map<int,int>mp;
        mp[arr[0]]=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                rank++;
                mp[arr[i]]=rank;
            }
        }
        vector<int>ans;

        for(int i=0;i<arr2.size();i++){
            ans.push_back(mp[arr2[i]]);
        }
        return ans;
        
    }
};