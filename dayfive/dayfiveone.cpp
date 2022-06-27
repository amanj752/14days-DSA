



#include<bits/stdc++.h>
using namespace std;
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int mn= INT_MAX;
        int ans=0;
        
        for(int i=0; i<n; i++){
            mn = min(mn, prices[i]);
            ans = max(ans, prices[i]-mn);
        }
        
        return ans;
    }
    int main(){
        vector<int> prices;
        prices={7,1,5,3,6,4};
        cout<<maxProfit(prices);

    }
