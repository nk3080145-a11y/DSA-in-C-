// wap a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int count = 0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==1){
        cout<<"Non Prime number";
    }
    else{
        cout<<"Prime number";
    }
    return 0;
}