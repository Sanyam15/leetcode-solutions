class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int res = 0,cnt=0,k=0;
        map <char,int> mp;
        //for(int i=0;i<26;i++)
        //    a[i]=0;
        for(int i=0;i<n;i++)
        {
          if(mp[s[i]]==0)
          {
              cnt++;
              mp[s[i]]=i+1;
          }    
          else
          {
              if(cnt>res)
                  res = cnt;
              int index = mp[s[i]];
              for(int j=k;j<index;j++)
              {
              	mp[s[j]]=0;
              	cnt--;
              }
              k = index;
              mp[s[i]] = i+1;
              cnt++;
          }
        }
        if(cnt>res)
            res=cnt;
        return res;
    }
};
