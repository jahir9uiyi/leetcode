class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int>arr2;
            arr1.push_back(nums[0]);
            arr2.push_back(nums[1]);
    vector<int>res(nums.size());
        for(int i=2;i<nums.size();i++)
        {
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        
    //    nums=arr1;
    //    nums.push_back(arr2);
    //    return nums;

    for(int i=0;i<arr1.size();i++)
    {
        res[i]=arr1[i];
    }
    for(int i=0;i<arr2.size();i++)
    {
        res[arr1.size()+i]=arr2[i];
    }
return res;
    }
};