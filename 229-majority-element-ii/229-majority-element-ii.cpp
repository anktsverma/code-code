class Solution {
public:
    // vector<int> majorityElement(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int>ans;
    //     unordered_map<int,int>mp;
    //     for(int i=0;i<n;i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto &i:mp){
    //         if(i.second>n/3){
    //             ans.push_back(i.first);
    //         }
    //     }
    //     return ans;
    // }
    
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int num1=-1,num2=-1,cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1)cnt1++;
            else if(nums[i]==num2)cnt2++;
            else if(cnt1==0){
                  num1=nums[i];
                  cnt1=1;
            }
            else if(cnt2==0){
                num2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        if(count(nums.begin(),nums.end(),num1)>(nums.size()/3))ans.push_back(num1);
        if(count(nums.begin(),nums.end(),num2)>(nums.size()/3)){
          if(num1!=num2)
            ans.push_back(num2);
        }
        return ans;
    }
};