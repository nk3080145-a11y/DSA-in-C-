// 1
// 2 1 
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter rows : ";
    cin>>r;
    for(int i=1;i<=r;i++){
        int var = i;
        for(int j=1;j<=i;j++){
            cout<<var<<" ";
            var--;
        }
        cout<<endl;
    }
    return 0;
}