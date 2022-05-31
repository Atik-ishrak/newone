#include<bits/stdc++.h>
using namespace std;

int main(){

int a[4];
int h;
cin>>a[0]>>a[1]>>a[2]>>a[3]>>h;

sort(a,a+4,greater<int>());

if(a[0]+a[1]+a[2]>=h){
  cout<<"WAW"<<endl;
}

else{
  cout<<"AWW"<<endl;
}




return 0;}
