class Solution {
public:
    int factorial(int n){
        int ans = 1;
        while(n) ans=ans*n--;
        return ans;
    }

    string getPermutation(int n, int k) {
        vector<int>arr(n);
        for(int i=0;i<n;i++) arr[i]=i+1;

        int fact = factorial(n-1);
        string ans="";

        while(true){
            int i=0;
            while(k>fact){
                k-=fact;
                i++;    
            }
            ans+=(arr[i]+'0');
            arr.erase(arr.begin()+i); 
            
            if(arr.size()==0) break;
            fact/=arr.size(); 
        }
        return ans;
        
    }
};