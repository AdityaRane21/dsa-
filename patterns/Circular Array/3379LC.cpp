class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans(n);

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[i]=nums[(i+nums[i])%n];
            }
            else if (nums[i] < 0) {
                int idx = (i + nums[i]) % n;   
                if (idx < 0) idx += n;          // fix negative index
                ans[i] = nums[idx];
            }
            else{
                ans[i]=nums[i];
            }
        }

        return ans;
    }
};