class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi = 0;
        int mini = 0;
        int n = nums.size();
        int i=0;
        int k = 0;
        for(int j=1;j<n;j++){
            if(nums[j-1]<nums[j]){
                //nothing
            }
            else{
                i = j;
            }

            if(nums[j-1]>nums[j]){
                //nothing
            }
            else{
                k = j;
            }

            maxi = max(maxi,j-i);
            mini = max(mini,j-k);
        }
    
    return max(maxi,mini) + 1;
    }
};