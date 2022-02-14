class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxsum=INT_MIN;
        int j=0;
        for(;j<nums.size();j++){
            if(nums[j]>0){
                break;
            }
            else{
                mxsum=max(mxsum,nums[j]);
            }
        }
        if(j==nums.size()){
            return mxsum;
        }
        
        int maxsum=INT_MIN;
        int currSum=0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            if(currSum<0){
                currSum=0;
            }
            maxsum=max(maxsum,currSum);
        }
        return maxsum;
    }
};