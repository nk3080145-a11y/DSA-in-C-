// A A A A 
//   B B B
//     C C
//       D
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
        char ch = 'A';
        ch = ch + i;
        for(int j=1;j<=nst;j++){
            cout<<ch;
        }
        cout<<endl;
        nst--;
    }
    return 0;
}