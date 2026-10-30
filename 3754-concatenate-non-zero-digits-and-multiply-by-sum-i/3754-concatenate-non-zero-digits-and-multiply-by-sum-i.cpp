class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        while(n>0)
        {
            int p=n%10;
            if(p!=0) {
            x=p+x*10;
            }
            n=n/10;
        }
        // reverse(x.begin(),x.end());
        long long sum=0;
        long long rev=0;
        long long act=x;
        while(x>0){
            int p=x%10;
            sum+=p;
            rev=p+rev*10;
            x=x/10;

            
        }
        return sum*rev;

    }
};