#include <bits/stdc++.h> 
using namespace std; 

int CumulSum(int a[],int i){
if(i==6) return a[i];
else return CumulSum(a,i+1)+a[i];
}

int main () {
  int a [] = {2,3,2,34,56,123,456};
  cout<<CumulSum(a,0)<<endl;
}
