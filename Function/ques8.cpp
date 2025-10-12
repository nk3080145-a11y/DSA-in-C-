// print all prime number 
#include<iostream>
using namespace std;
int prime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j!=0){
                cout<<i<<endl;
            }
            break;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    prime(n);
    return 0;
}