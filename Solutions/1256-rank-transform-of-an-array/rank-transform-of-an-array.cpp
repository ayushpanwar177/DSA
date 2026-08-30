class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();

        vector<vector<int>> temp(n);
        for (int i = 0; i < n; i++) {
            temp[i] = {arr[i], i, 0};
        }
        sort(temp.begin(), temp.end());
        int rank = 1;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                temp[i][2] = rank;
                continue;
            }

            if (temp[i][0] == temp[i - 1][0]) {
                temp[i][2] = rank;
            } else {
                rank++;
                temp[i][2] = rank;
            }
        }
        for (int i = 0; i < n; i++) {
            arr[temp[i][1]] = temp[i][2];
        }

        return arr;
    }
};