// 1 
// 2 3
// 4 5 6
// 7 8 9 10 
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter row : ";
    cin>>r;
    int var = 1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<var<<" ";
            var++;
        }
        cout<<endl;
    }
    return 0;
}