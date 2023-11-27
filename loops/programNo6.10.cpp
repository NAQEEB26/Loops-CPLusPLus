#include<iostream>
using namespace std;
int main(){
int oddSum,evenSum,n;
oddSum=0;
evenSum=0;
cout<<"Enter a psitive number ";
cin>>n;
while(n>=0){
	if(n%2==0){
		evenSum=evenSum+n;
	}
	else{
		oddSum=oddSum+n;
		n--;
	}
	cout<<"The sum of even digits "<<evenSum<<endl;
	cout<<"The sum of odd digits "<<oddSum<<endl;
}
return 0;
}

