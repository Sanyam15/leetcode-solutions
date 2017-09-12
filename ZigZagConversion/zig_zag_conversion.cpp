class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows<=1)
            return s;
    vector <string> v[numRows];
        int n = s.length();
        int cnt = 0,flag=1;
        string temp = "",temp1="";
        for(int i=0;i<n;i++)
        {
            temp1+=s[i];
            v[cnt].push_back(temp1);
            if(cnt==0)
                flag=1;
            if(cnt==numRows-1)
                flag=-1;
            cnt+=flag;    
            temp1 = "";
        }
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<v[i].size();j++)
                temp+=v[i][j];
        }
        return temp;
        //delete[] v;
    }
};
