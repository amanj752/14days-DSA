class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        int temp=0;
        while(temp<=n){  
            int num=temp, count=0;
            while(num){
                num = num & num-1;
                count++;
            }
            res.push_back(count);
            temp++;
        }
        return res;
    }
};
