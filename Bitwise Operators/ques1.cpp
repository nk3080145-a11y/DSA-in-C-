// Figure out how to find if a number is power of 2 without using loops
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n > 0 && (n & (n-1))==0){
        cout<<n<<" is a power of 2";
    }else{
        cout<<n<<" is not a power of 2";
    }
    return 0;
}