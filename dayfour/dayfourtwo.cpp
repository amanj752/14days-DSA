


#include<bits/stdc++.h>
using namespace std;
    int xorOperation(int n, int start) {
    int res = start;
    for(int i=1; i<n; i++){
      res = res ^ (start+ 2*i);
    }
    return res;
    }
    int main(){
        int n,start;
        cin>>n>>start;
        cout<<xorOperation(n,start);
    };
