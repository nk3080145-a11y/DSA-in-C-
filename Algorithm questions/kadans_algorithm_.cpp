// Maximun subarray sum with kadans algorithm
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 7;
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int cs = 0;
    int ms = INT32_MIN;
    for(int i=0;i<n;i++){
        cs += vec[i];
        ms = max(cs,ms);
        if(cs<0){
            cs = 0;
        }
    }
    cout<<ms<<endl;
    return 0;
}