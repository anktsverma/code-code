class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return nums.size();
        int k=1;
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                nums[++i]=nums[j++];
                k++;
            }
            else{
                j++;
            }
        }
        return k;
    }
};