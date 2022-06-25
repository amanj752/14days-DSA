


        #include<bits/stdc++.h>
        using namespace std;
            int removeDuplicates(vector<int>& nums) {
                if(nums.size() == 0) return 0;
                int left = 0;
                for(int right =1; right< nums.size(); right++){
                if(nums[left] != nums[right])
                    left++;
                    nums[left] = nums[right];
                }
            return left+1;
            }
        int main(){
            vector<int> nums;
            nums={0,0,1,1,1,2,2,3,3,4};
            int n=removeDuplicates(nums);
            cout << "[";
            for (int i=0; i<n; i++){
                {
                    if (i == n-1) cout <<nums[i];
                    else cout <<nums[i]<< ",";
                }
            }
            cout <<"]"<<endl;

            return 0;
        }