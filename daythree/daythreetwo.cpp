

#include<bits/stdc++.h>
using namespace std;
  int missingNumber(vector<int>& nums) {
        int res=0;  
        int i=0;
        
        for(i=0;i<nums.size();i++){
            res=res ^ nums[i] ^ i;
        }
        res=res ^ i;
        
        return res;
    }
   int main()
{
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums);
}
