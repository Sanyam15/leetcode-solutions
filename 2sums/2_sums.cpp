class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, vector <int> > mp;
        vector <int> res;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]].push_back(i);
        for(int i=0;i<nums.size();i=i+1)
        {
            int var = target-nums[i];
            if(mp.find(var)==mp.end())
                continue;
            if(mp[var].size()==1&&mp[var][0]!=i)
            {
                res.push_back(i);
                res.push_back(mp[var][0]);
                break;
            }
            else if(mp[var].size()>=2)
            {
                if(mp[var][0]!=i)
                {    
                    res.push_back(i);
                    res.push_back(mp[var][0]);
                    break;
                }
                else if(mp[var][1]!=i)
                {
                    res.push_back(i);
                    res.push_back(mp[var][1]);
                     break;
                }
            }
        }
        return res;
    }
};
