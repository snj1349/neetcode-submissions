class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        int n=nums.size();
        int zero=0, minus=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)zero++;
            else total*=nums[i];
            //if(nums[i]<0)minus++;
        }
        if(zero>1){
            return vector<int>(n,0);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(zero==1 &nums[i]!=0)ans.push_back(0);
            else if(zero==1 & nums[i]==0)ans.push_back(total);
            else ans.push_back(total/nums[i]);
        }
        return ans;
    }
};
