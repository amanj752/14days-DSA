


#include<bits/stdc++.h>
using namespace std;
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int i = 0;
        while(i < nums.size()-1){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
                i = i+2;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    void print_vector(vector<int> nums){
        cout << "[";
        for(int i = 0; i<nums.size(); i++){
            if (i == nums.size() - 1) cout << nums[i];
		    else cout << nums[i] << ",";
        }
        cout <<"]"<<endl;
        }
    int main(){
        vector<int> nums={1,1,2};
        print_vector(findDuplicates(nums));
        
    }
