// Ek program likho jo user se n elements input le aur unhe ek vector me store kare
// Fir vector ke sabhi elements ko display kare (ek hi line me, space ke sath).
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<vec.size();i++){
        cout<<"Enter the "<<i+1<<" element of vector : "<<endl;
        cin>>vec[i];
    }
    for(int i : vec){
        cout<<i<<endl;
    }
    return 0;
}