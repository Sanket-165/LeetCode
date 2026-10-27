class Solution {
public:
    vector<string> createGrid(int m, int n) {
            vector<string>ans;

            for(int i=0;i<m;i++){
                string x="";
                for(int j=0;j<n;j++){
                    x+='#';
                }
                ans.push_back(x);
            }

            bool right=true;
            bool down = false;

            int i=0;
            int j=0;

            while(i<m && j<n){
                if(right){
                    j++;

                    if(j==n) break;
                    ans[i][j]='.';
                    right=false;
                    down=true;

                }
                else{
                    i++;

                    if(i==m) break;
                    ans[i][j]='.';
                    right=true;
                    down=false;
                }
            }

            if(i==m){
                i--;
                while(j<n){
                    ans[i][j]='.';
                    j++;
                    
                }
            }
            if(j==n){
                j--;
                while(i<m){
                    ans[i][j]='.';
                    i++;
                    
                }
            }
            ans[0][0]='.';
            return ans;
    }
};