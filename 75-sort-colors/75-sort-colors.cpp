class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int low=0;
        // int mid=0;
        // int high=nums.size()-1;
        // while(mid<=high){
        //     if(nums[mid]==0){
        //         swap(nums[low++],nums[mid++]);
        //     }
        //     else if(nums[mid]==1){
        //         mid++;
        //     }
        //     else{
        //         swap(nums[mid],nums[high--]);
        //     }
        // }
        // int freq[3]={0};
        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]++;
        // }
        // int i=0;
        // while(freq[0]>0){
        //       nums[i++]=0;
        //     freq[0]--;
        // }
        // while(freq[1]>0){
        //       nums[i++]=1;
        //     freq[1]--;
        // }
        // while(freq[2]>0){
        //       nums[i++]=2;
        //     freq[2]--;
        // }
        
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
           if(nums[mid]==0){
                swap(nums[low++],nums[mid++]); 
            }
           else if(nums[mid]==2){
               swap(nums[high--],nums[mid]);
           }
           else mid++;
        }
       
    }
};