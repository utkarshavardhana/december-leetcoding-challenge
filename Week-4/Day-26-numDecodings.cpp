class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        if(n==1)
            return (s[0] != '0')? 1:0;
        
        int prev2 = 1;
        int prev1 =  (s[0] != '0')? 1:0;
        
        for(int i=1; i<n; i++){
            int cur = 0;
            if(s[i] != '0')
                cur += prev1;
            int val = (s[i-1]-'0')*10 + (s[i]-'0');
            if(val>=10 && val <= 26)
                cur+= prev2;
            
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
        
    }
};
