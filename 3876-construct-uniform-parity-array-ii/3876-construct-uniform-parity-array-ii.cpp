class Solution {
public:
    bool uniformArray(vector<int>& a) {
        int mini = INT_MAX, count = 0;
        for (int x : a) {
            mini = min(mini, x);
            if (x % 2 == 1) count++;
        }
        return mini % 2 || count == 0; 
    }
};