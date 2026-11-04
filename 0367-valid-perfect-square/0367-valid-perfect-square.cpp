class Solution {
public:
    bool isPerfectSquare(int num) {
     long long low=1;
     long long high=num;
     while(low<=high)
     {
        long long mid=(low+high)/2;
        long long sq=mid*mid;
        if(sq==num) return 1;
        if(sq>num) high=mid-1;
        else low=mid+1;
     }
       return 0;
    }
};