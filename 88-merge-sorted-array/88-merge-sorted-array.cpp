class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        
        while(i<m and j<n){
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(),nums2.end());
            }
        }
        for(int k=0;k<n;k++){
            nums1[i++]=nums2[k];
        }
    }
};