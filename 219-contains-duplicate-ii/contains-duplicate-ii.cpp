class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     unordered_map<int,int> t;
     for(int i=0; i<nums.size();i++)
     {
        if(t.count(nums[i]))
        {
            int a=i-t[nums[i]];
            if(a<=k){
                return true;
            }
            else
            {
                t[nums[i]]=i;
            }
        }
        else
        {
            t[nums[i]]=i;
        }
        
     }   
     return false;
    
}};