#include<iostream>
using namespace std;
int main(){
int n,sum,x,r;
cout<<"Enter a integer ";
cin>>n;
n=x;
while(n!=0){
 r=n%10;
 if(r==0){
sum=sum+n;
 }
 else{
 	sum=sum+r;
 	n=n/10;
 }
 cout<<"The sum of integer of "<<x<<"="<<sum<<endl;
}
return 0;
}

