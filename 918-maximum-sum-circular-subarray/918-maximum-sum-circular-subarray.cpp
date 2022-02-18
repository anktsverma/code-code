class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             nums.push_back(nums[i]);
//         }
//         int maxSum=INT_MIN;
//         int currSum=0;
//         int mn=INT_MIN;
//         int j;
//         for(j=0;j<n;j++){
//             if(nums[j]>0) break;
//             else{
//                 mn=max(mn,nums[j]);
//             }
//         }
//         if(j==n) return mn;
        
//         int i=0;
//         int k=n-1;
        
//         while(k<(nums.size()-1)){
//          currSum=0;
//          for(int l=i;l<=k;l++){
//             currSum+=nums[l];
//             if(currSum<0){
//                 currSum=0;
//             }
//             maxSum=max(maxSum,currSum);
//           }
//           i++;
//           k++;
//         }  
//         return maxSum;
        

       int mn=INT_MAX;
       int Max1=INT_MIN;
       int Max2=INT_MIN;
       int currSum=0;
       int totalSum=accumulate(nums.begin(),nums.end(),0);
        
       for(int i=0;i<nums.size();i++){
           currSum+=nums[i];
           mn=min(currSum,mn);
           if(currSum>0){
               currSum=0;
           }
       }
       currSum=0;
       for(int i=0;i<nums.size();i++){
           currSum+=nums[i];
           Max1=max(Max1,currSum);
           if(currSum<0)currSum=0;
       }
       Max2=(totalSum-mn==0)?INT_MIN:totalSum-mn;
       return max(Max1,Max2);
    }
};