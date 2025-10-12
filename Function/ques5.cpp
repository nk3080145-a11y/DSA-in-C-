// calculate sum of digits of a number
#include<iostream>
int sumOfDigit(int n){
    int sum=0;
    for(int i=1;n!=0;i++){
        sum = sum+n%10;
        n=n/10;
    }
    return sum;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sum of digits is "<<sumOfDigit(n)<<endl;
    return 0;
}