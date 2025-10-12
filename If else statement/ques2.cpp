// If your age is greater than 18 its means you are able to give your vote and If your age is less than 18 than you are not able to gave your vote
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>=18){
        cout<<"You are able to gave vote";
    }
    else{
        cout<<"You are not able to gave vote";
    }
    return 0;
}