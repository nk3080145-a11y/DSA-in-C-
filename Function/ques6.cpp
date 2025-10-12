// Calculate nCr binomial coefficient for n & r
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"The value of nCr is "<<(factorial(n))/(factorial(r)*factorial(n-r))<<endl;
    return 0;
}