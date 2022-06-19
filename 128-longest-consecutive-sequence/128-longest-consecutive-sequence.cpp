class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        if(nums.size()==0) return 0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        int Len=0;
        for(auto i:s){
            if(s.find(i-1)==s.end()){
                int currLen=1;
                int currNum=i;
                while(s.find(currNum+1)!=s.end()){
                    currLen++;
                    currNum++;
                }
                Len=max(Len,currLen);
            }
        }
        return Len;
    }
};