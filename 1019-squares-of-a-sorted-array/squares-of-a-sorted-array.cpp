class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size());
        int i=0,j=0,f=0;
        while(i<n && nums[i]<0){
            i++;
        }
        j=i;
        i=i-1;
        
        while(i>-1 && j<nums.size()){
            if((nums[i]*nums[i])<(nums[j]*nums[j])){
                ans[f]=nums[i]*nums[i];
                i--;
                f++;
            }
            else{
                ans[f]=nums[j]*nums[j];
                j++;
                f++;
            }
        
        }
        while(i>=0)
        {
            ans[f]=nums[i]*nums[i];
            f++;
            i--;
        }
        while(j<n){
            ans[f]=(nums[j]*nums[j]);
            j++;
            f++;
        }
        return ans;
        
    }
};