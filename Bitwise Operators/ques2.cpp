// reverse number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : " ;
    cin>>num;
    int lastdigit = 0;
    for(int i=1;num>0;i++){
        lastdigit = lastdigit + num%10;
        num /= 10;
        lastdigit *=10;
    }
    lastdigit /= 10;
    cout<<lastdigit;
    return 0;
}