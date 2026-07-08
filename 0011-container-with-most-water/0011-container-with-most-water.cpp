class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int ans =0;

        while(l<r){
            int curr = min(height[l],height[r]) * (r-l);

            ans = max(curr, ans);

            if(height[l]<height[r])
             l++;
            else
             r--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna