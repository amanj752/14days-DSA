


#include<bits/stdc++.h>
using namespace std;

    string convertToTitle(int n) {
        string result = "";
        while(n){
            char c = 'A' + (n-1) % 26;
            result = c + result;
            n = (n-1)/26;
        }
        return result;
    }
int main(){
    int n;
    cin>>n;
    cout<<convertToTitle(n);
};