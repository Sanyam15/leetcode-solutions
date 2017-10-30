class Solution {
public:
    bool isPalindrome(int x) {
        int flag=0;
        if(x<0)
            flag=1;
        x = abs(x);
        int temp = x;
        int ans = 0;
        while(temp!=0)
        {
            ans = ans*10 + temp%10;
            temp/=10;
        }
        if(flag)
            ans=-1*ans;
        if(ans==x)
            return true;
        else
            return false;
    }
};
