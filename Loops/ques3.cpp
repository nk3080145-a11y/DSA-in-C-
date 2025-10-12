#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int sum =0;
    for(int i=1;i<=num;i++){
        sum = sum + i;
    }
    cout<<"The value of sum is "<<sum<<endl;
    return 0;
}