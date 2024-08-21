class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool flag = true;
        unordered_map<int, int> change;
        change[5] = 0; change[10] = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                change[5]++;
            }
            else if (bills[i] == 10) {
                change[10]++;
                if (change[5] > 0) {
                    change[5]--;
                }
                else {
                    flag = false;
                    break;
                }
            }

            else if (bills[i] == 20) {
                if (change[10] >= 1 && change[5] >= 1) {
                    change[10]--;
                    change[5]--;
                } 
                else if (change[5] >= 3) {
                    change[5] = change[5] - 3;
                }
                else{
                    flag = false;
                break;
            }
        }
    }
    return flag;
    }
};
