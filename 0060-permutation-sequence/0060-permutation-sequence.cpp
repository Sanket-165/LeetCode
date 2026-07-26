class Solution {
public:
    int factorial(int n){
        int ans = 1;
        while(n){
            ans=ans*n;
            n--;
        }
        return ans;
    }

    string getPermutation(int n, int k) {
        vector<int>ans;
        int fact = factorial(n-1);
        int currSize=n-1;
        vector<int>arr(n);

        for(int i=0;i<n;i++) arr[i]=i+1;
        while(ans.size()!=n){
            int i=0;
            while(k>fact){
                k-=fact;
                i++;    
            }
            ans.push_back(arr[i]);
            arr.erase(arr.begin()+i); 
            
            if(currSize>0)
            fact/=currSize;
            currSize--;
        }

        string s = "";

        for(int i=0;i<ans.size();i++){
            s+=('0'+ans[i]);
        }

        return s;
        
    }
};