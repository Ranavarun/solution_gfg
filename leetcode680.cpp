class Solution {
public:
bool checkpalindrome(string s,int i,int j)
{
int st =i;
int e =j;
while(st<=e)
{

if(s[st] != s[e])
{
    return false;
}

else
{
    st++;
    e--;
}


}
return true;


}
    bool validPalindrome(string s) {
        int st = 0;
        int e = s.length()-1;
        int c = 1;
        
       while(st<=e)
       {
           
               if(s[st]!= s[e])
               {
                   return checkpalindrome(s,st+1,e)||checkpalindrome(s,st,e-1);

                   
               }


           
           else
           {
                st++;
                e--;
           }
         


       }
       
return true;
    }
};
