// 1 1 1 1
//   2 2 2
//     3 3 
//       4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nst = n;
    for(int i=0;i<n;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<(i+1);
        }
        cout<<endl;
        nst--;
    }
    return 0;
}