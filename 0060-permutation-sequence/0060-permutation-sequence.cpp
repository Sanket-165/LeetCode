class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>arr(n);
        int fact = 1;
        for(int i=1;i<=n;i++){
            arr[i-1]=i;
            fact*=i;
        }
        fact/=n;   
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