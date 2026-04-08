class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {

        int l=0,r=nums.size()-1;
        vector<int>res;
        while(l<r)
        {
            if(nums[l]+nums[r]<t)l++;
            else if(nums[l]+nums[r]>t)r--;
            else {
                
                res.push_back(l+1);
                res.push_back(r+1);
                return res;
            }
        }
        
        
    }
};
