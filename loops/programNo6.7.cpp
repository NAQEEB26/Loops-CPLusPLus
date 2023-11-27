#include<iostream>
using namespace std;
int main(){
int n,c,f;
c=1;
f=1;
cout<<"Enter a number";
cin>>n;
while(c<=n){
f=f*c;
c++;
}
cout<<"Foctorial of "<<n<<" is "<<f<<endl;
return 0;
}

