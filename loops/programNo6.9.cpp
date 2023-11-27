#include<iostream>
using namespace std;
int main(){
float x,y;
x=2.0;
y=1.0;
while(x<=100){
y=y+1.0/x;
x=x+2;
}
cout<<"Result of "<<y<<endl;
return 0;
}

