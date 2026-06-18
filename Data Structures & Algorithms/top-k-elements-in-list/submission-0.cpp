class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end())mp[nums[i]]=1;
            else mp[nums[i]]++;
        }
       vector<pair<int,int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(),
            [](const pair<int,int>& p1, const pair<int,int>& p2) {
                return p1.second < p2.second;
            });
        reverse(vec.begin(),vec.end());
        vector<int>ans;
        int n=0;
        for(auto &p : vec) {
            n++;
            ans.push_back(p.first);
            if(n==k)break;
        }
        return ans;
    }
};
