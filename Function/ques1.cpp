// two number sum using function
#include<iostream>
using namespace std;
int sum(int a,int b){
    int add = a+b;
    return add;
}
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<sum(a,b)<<endl;
    return 0;
}