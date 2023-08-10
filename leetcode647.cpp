class Solution {
public:

 int expandAroundIndex(string s,int i,int j)
 {
   int ans=0;

     while(i >= 0 && j<s.length() && s[i]==s[j])
     {
        
            ans++;
            i--;
            j++;
        

     }

     return ans;
 }
    int countSubstrings(string s) {
        int count = 0;


        int n = s.length();


        for(int i =0;i<n ;i++)
        {
            int oddans = expandAroundIndex(s,i,i);
            count = count +oddans;

            int evenans = expandAroundIndex(s,i,i+1);
            count = count +evenans;
        }
        return count;
    }
};
