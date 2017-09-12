class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size()-1;
        int ans = min(h[0],h[h.size()-1])*(r-l);
        while(l<r)
        {
            if(h[l]<h[r])
                l++;
            else
                r--;
            ans = max(ans,min(h[l],h[r])*(r-l));
        }
        return ans;
    }
};
