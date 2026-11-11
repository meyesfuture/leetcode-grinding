class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;
        if(costBoth > cost1 + cost2){
            ans = (double) cost1 * need1 + (double) cost2 * need2;
        }
        else{
            int dif = abs(need1 - need2);
            if(need1 > need2){
                ans += (double) costBoth * need2;
                if(cost1 > costBoth){
                    ans += (double) dif * costBoth;
                }
                else{
                     ans += (double) dif * cost1;
                }
            }
            else{
                ans += (double) costBoth * need1;
                if(cost2 > costBoth){
                    ans += (double) dif * costBoth;
                }
                else{
                     ans += (double) dif * cost2;
                }
            }
        }

        return ans;
    }
};