class Solution {
public:
    int merge(vector<int>&nums,int left, int mid, int right){
    int count=0;
    int j=mid;
    for(int i=left;i<mid;i++){
        while(j<=right and nums[i]>(long long)2*nums[j]){
            j++;
        }
        count+=j-mid;
    }
    int i=left;
    j=mid;
    int temp[right-left+1];
    int k=0;
    while(i<mid and j<=right){
        if(nums[i]<=nums[j]){
            temp[k++]=nums[i++];
        }
        else{
            temp[k++]=nums[j++];
        }
    }
    while(i<mid){
        temp[k++]=nums[i++];
    }
    while(j<=right){
        temp[k++]=nums[j++];
    }
    for(int l=left,k=0;l<=right;l++,k++){
        nums[l]=temp[k];
    }
    return count;
    
  }
    int mergeSort(vector<int>&nums,int left,int right){
        if(left<right){
            int mid=left+(right-left)/2;
            int countLeft=mergeSort(nums,left,mid);
            int countRight=mergeSort(nums,mid+1,right);
            int mycount=merge(nums,left,mid+1,right);
            return countLeft+countRight+mycount;
        }
        return 0;
    }
    int reversePairs(vector<int>& nums) {
        //Brute Force 0(n^2)
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]>2*nums[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        int ans=mergeSort(nums,0,nums.size()-1);
        return ans;
    }
};