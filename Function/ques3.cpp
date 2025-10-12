// Calculate sum of numbers of 1 to N
#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sum of 1 to N = "<<sum(n)<<endl;
    return 0;
}