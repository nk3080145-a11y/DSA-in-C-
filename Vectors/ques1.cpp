#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>& vec,int target){
    for(int val : vec){
        if(target==val){
        cout<<"Yes i found it ";
        }
    }
    
}
int main(){
    vector<int> vec = {4,2,7,8,1,2,5};
    int target = 8;
    
    return 0;
}