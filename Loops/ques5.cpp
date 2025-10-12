// sum of all odd numbers from 1 to n using while loop 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int i = 1;
    int sum = 0;
    while(i<=num){
        if(i%2!=0){
            sum = sum + i;
        }
        i++;
    }
    cout<<"The value of all odd number sum is "<<sum<<endl;
    return 0;
}