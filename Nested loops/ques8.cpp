// A
// B B 
// C C C 
// D D D D
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter row : ";
    cin>>r;
    char ch = 'A';
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
    return 0;
}