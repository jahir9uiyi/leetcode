class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        int twen = 0;
        int n = bills.size();
        for (int i = 0; i < n; i++) {
            int ch = bills[i];
            if (ch == 5) {
                five++;
            } else if (ch == 10) {
                if (five == 0)
                    return false;
                five--;
                ten++;
            } else if (ch == 20) {
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                } else if (five >= 3) {
                    five -= 3;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};