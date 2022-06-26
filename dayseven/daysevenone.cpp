


#include<bits/stdc++.h>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string ans="";
        string start=strs[0],end=strs[n-1];
        for(int i=0;i<start.size();i++)
        {
            if(start[i]==end[i])
            {
                ans+=start[i];
            }
            else break;
        }
        return ans;
    }
int main(){
    vector<string> strs;
    strs = {"flower","flow","flight"};
    cout<<'"'<<longestCommonPrefix(strs)<<'"';
}