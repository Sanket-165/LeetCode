class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";

        vector<int>nums;

        for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){
                string curr = s.substr(i,j-i+1);

                int curr2=stoi(curr);

                if(curr2>=low && curr2<=high) nums.push_back(curr2);
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};