class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxx = 0;

        for (int i = 0; i <= n; i++) {
            int alt = 0;

            for (int j = 0; j < i; j++) {
                alt += gain[j];
            }

            maxx = max(maxx, alt);
        }

        return maxx;
    }
};
