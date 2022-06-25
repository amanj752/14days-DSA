

#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
       for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
               if(nums[i]+nums[j]==target){
                   v.push_back(i);
                   v.push_back(j);
               }
           }
       }  
        return v;
    }
int main(){
    vector<int> v;
     v={3,3,6};
     vector<int> result= twoSum (v, 6);
     cout << "[";
            for (int i=0; i<result.size(); i++){
                {
                    if (i == result.size()-1) cout <<result[i];
                    else cout <<result[i]<< ",";
                }
            }
            cout <<"]"<<endl;

            return 0;
}