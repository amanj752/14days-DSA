// method 1

#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b){
    string result;
    int i=a.length()-1,j=b.length()-1;
    int carry = 0;
    while (i>=0 || j>=0)
    {
        int sum=carry;
        if(i>=0) sum+=a[i--]-'0';
        if(j>=0) sum+=b[j--]-'0';
        carry = sum>1?1:0;
        result+= to_string(sum%2);
    }
    if(carry) result+= to_string(carry);
    reverse(result.begin(), result.end());
    return result;
    
}
int main()
{
    string a = "1101", b = "100";
    cout << addBinary(a, b) << endl;
    return 0;
}

// methood  2
#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b){
   int asize=a.length();
   int bsize=b.length();
   int i=0, carry=0;
   string res="";
   while(i<asize || i<bsize || carry!=0){
    int x=0;
    if(i<asize && a[asize-i-1]=='1'){
        x=1;
    }
    int y=0;
    if(i<bsize && b[bsize-i-1]=='1'){
        y=1;
    }
    res=to_string((x+y+carry)%2)+res;
    carry=(x+y+carry)/2;
    i+=1;
   }
    return res;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout << addBinary(a, b) << endl;
    return 0;
}