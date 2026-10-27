class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int>st;
        vector<int>res(n);
        res[n-1]=0;
        // st.push(temp[n-1]);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && temp[ st.top()]<=temp[i]){
                st.pop();
            }
            if(st.empty())
            {
                res[i]=0;
            }
            else{
                res[i]=st.top()-i;
            }
            st.push(i);

        }
return res;
    }
};