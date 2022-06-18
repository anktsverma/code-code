class Solution {
public:
    // int majorityElement(vector<int>& nums) {
    //     unordered_map<int,int>mp;
    //     int n=nums.size();
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto i:mp){
    //          if(i.second>(n/2)){
    //              return i.first;
    //          }
    //     }
    //     return -1;
    // }
    
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele=-1;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                ele=nums[i];
            }
            if(ele==nums[i]) cnt++;
            else cnt--;
        }
        return ele;
    }
};