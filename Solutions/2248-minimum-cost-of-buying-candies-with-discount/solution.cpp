class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total=0;
        int count=0;
        sort(cost.begin(),cost.end());
        for(int i=cost.size()-1;i>=0;i--){
            count++;
            if(count%3==0)
            continue;
            total+=cost[i];
        }
        return total;
    }
};
