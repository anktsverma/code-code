class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int i=0;
        int j=1;
        int mxcount=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
                mxcount=max(mxcount,count);
            }
            else{
                count=0;
            }
            i++;
            
        }
        return mxcount;
    }
};