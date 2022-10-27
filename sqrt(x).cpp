//problem number 69
class Solution {
public:
    int mySqrt(int x) {
      //using built in function
      // int ans=sqrt(x);
      // return ans;
      
      //without using built in function
        long long int mid,ans;
        long long int start=0;
        long long int end=x;
        while(start<=end)
        {
            mid=(start+end)/2;
            if((mid*mid)==x)
            {
                ans=mid;
                return ans;
            }
            else if((mid*mid)>x)
            {
                end=mid-1;
                
            }
            else
            {
                start=mid+1;
                
            }
            
        }
        return end;
        
        
    }
};
