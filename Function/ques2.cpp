// find min number of two
#include<iostream>
using namespace std;
int minoftwo(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a , b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Minimum number is "<<minoftwo(a,b)<<endl;
    return 0;
}