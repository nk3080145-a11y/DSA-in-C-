// sum of all odd numbers from 1 to n using for loop 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int sum = 0;
    for(int i=1;i<=num;i++){
        if(i%2!=0){
           sum = sum + i;
        }
    }
    cout<<"The value of all odd number sum is "<<sum<<endl;
    return 0;
}