// Prime number using function
#include<iostream>
using namespace std;
int prime(int n){
    int count = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if((prime(n)==0)){
        cout<<"Prime number";
    }else{
        cout<<"Non prime number";
    }
    return 0;
}