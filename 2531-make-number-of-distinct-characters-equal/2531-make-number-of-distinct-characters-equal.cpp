class Solution {
public:
    bool isItPossible(string word1, string word2) {
        vector<int>freq1(26,0),freq2(26,0);

        for(auto x:word1){
            freq1[x-'a']++;
        }

        for(auto x:word2){
            freq2[x-'a']++;
        }

        for(int i=0;i<26;i++){
            if(freq1[i]==0)continue;

            for(int j=0;j<26;j++){
                if(freq2[j]==0)continue;

                freq1[i]--;
                freq2[j]--;
                freq1[j]++;
                freq2[i]++;

                int d1=0,d2=0;
                for(int k=0;k<26;k++){
                    if(freq1[k]>0)d1++;
                    if(freq2[k]>0)d2++;
                }
                if(d1==d2)return true;
                
                freq1[i]++;
                freq2[j]++;
                freq1[j]--;
                freq2[i]--;
            }
        }
        return false;
    }
};