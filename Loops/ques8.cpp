// Figure out how to find if a number is power of 2 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int count = 0;
    int power = 1;
    for(int i=1;i<=n/2;i++){
        if(power==n){
            count++;
            break;
        }
        power = power * 2;
    }
    if(count==1){
        cout<<"Yes this number is power of 2";
    }
    else{
        cout<<"No this number is power of 2";
    }
    return 0;
}