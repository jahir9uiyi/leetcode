class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int m=arr2.size();
        sort(arr2.begin(),arr2.end());
        int res=0;
        for(int i=0;i<n;i++)
        {
            int low=0;
            int high=m-1;
            bool check=1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(abs(arr1[i]-arr2[mid])<=d){
                    check=0;
                    break;
                }
                else if(arr2[mid]>arr1[i]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            if(check==1)
            {
                res++;
            }
        }
        return res;
    }
};