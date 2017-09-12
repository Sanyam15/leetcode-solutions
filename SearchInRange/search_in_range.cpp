class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        int n = a.size(),flag=0;
        int l = 0,r=n-1,v1,v2;
        vector <int> res;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid]>=target)
            {
                if(a[mid]==target)
                    flag=1;
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        if(flag==0)
        {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        else
            v1 = l;
        l =0, r = n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid]>target)
            {
                r = mid-1;
            }
            else if(a[mid]<=target)
            {
                l = mid+1;
            }
        }
        v2 = l;
        res.push_back(v1);
        res.push_back(v2-1);
        return res;
    }
};
