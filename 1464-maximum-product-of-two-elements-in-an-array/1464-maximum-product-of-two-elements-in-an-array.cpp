class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int sec = -1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>maxi){
                sec=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>sec){
                sec=nums[i];
            }
        }

        return (sec-1)*(maxi-1);

    }
};