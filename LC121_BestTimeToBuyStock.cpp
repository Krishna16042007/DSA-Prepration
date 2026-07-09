class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int c=0;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            mn=min(mn,prices[i]);
            c=max(c,prices[i]-mn);
        }
        return c;
    }
};
