class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        s='1'+s+'1';

        vector<int> arr;
        vector<char> ch;

        char cc=s[0];
        int cnt=1;

        for(int i=1;i<s.size();i++){
            if(s[i]==cc) cnt++;
            else{
                arr.push_back(cnt);
                ch.push_back(cc);
                cc=s[i];
                cnt=1;
            }
        }
        arr.push_back(cnt);
        ch.push_back(cc);

        int ones=0;
        for(int i=0;i<arr.size();i++)
            if(ch[i]=='1')
                ones+=arr[i];
        ones-=2;

        int ans=ones;

        for(int i=1;i+1<arr.size();i++){
            if(ch[i]=='1' && ch[i-1]=='0' && ch[i+1]=='0'){
                int cur=ones-arr[i];
                cur+=arr[i-1]+arr[i]+arr[i+1];
                ans=max(ans,cur);
            }
        }

        return ans;
    }
};