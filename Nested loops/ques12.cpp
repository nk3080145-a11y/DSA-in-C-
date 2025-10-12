// A 
// B A 
// C B A 
// D C B A
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        char ch = 'A';
        ch = ch + i;
        for(int j=1;j<=(i+1);j++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
    return 0;
}