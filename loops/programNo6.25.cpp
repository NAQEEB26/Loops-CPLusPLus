#include<iostream>
using namespace std;
int main(){
int tab,len,c;
cout<<"Enter a table number ";
cin>>tab;
cout<<"Enter a length ";
cin>>len;
for(c=1; c<=len; c++){
cout<<tab<<"*"<<c<<"="<<tab*c<<endl;
}
return 0;
}

