#include<bits/stdc++.h>
using namespace std;
string intToRoman(int number) {
        int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;  
    int d;
    string ans="";
    while(number>0)
    {
        d = number/num[i];
      number = number%num[i];
      while(d--)
      {
        ans+=sym[i];
      }
      i--;
    }
     return ans;   
    }
int main(){
    int number;
    cin>>number;
    cout<<intToRoman(number);
}