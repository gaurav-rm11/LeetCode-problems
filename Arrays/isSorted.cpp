class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size()+1; i++){
            if(nums[(i-1)%nums.size()]<nums[i%nums.size()] && count==1){
                continue;
            }
            else if(nums[(i-1)%nums.size()]>nums[i%nums.size()] && count==0){
                count=1;
            }
            else if(nums[(i-1)%nums.size()]>nums[i%nums.size()] && count==1){
                return false;
            }
        }
        return true;
    }
};