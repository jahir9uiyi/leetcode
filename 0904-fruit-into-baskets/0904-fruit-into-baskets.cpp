class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>cap;
        int low=0;
        int n=fruits.size();
        int res=-1;
        for(int high=0;high<n;high++)
        {
            cap[fruits[high]]++;
            while(cap.size()>2){
                cap[fruits[low]]--;
                if(cap[fruits[low]]==0) {
                    cap.erase(fruits[low]);
                }
                low++;
            }
            if(cap.size()<=2){
                res=max(res,high-low+1);
            }
        }
        return res;
    }
};