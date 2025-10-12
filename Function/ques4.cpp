// Calculate N factorial
#include<iostream>
using namespace std;
int fac(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The value of factorial N is "<<fac(n)<<endl;
    return 0;
}