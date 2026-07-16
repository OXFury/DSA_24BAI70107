class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1,post=1;
        vector<int>answer(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            answer[i]=pre;
            pre=pre*nums[i];
        }
        for(int i=nums.size()-1;i>-1;i--)
        {
            answer[i]=answer[i]*post;
            post=post*nums[i];
        }
        return answer;
    }
};