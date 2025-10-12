#include<iostream>
using namespace std;
int main(){
    int arr[7] = {4,2,7,8,1,2,5};
    int target = 8;
    int idx=-1;
    for(int i=0;i<7;i++){
        if(arr[i]==target){
            idx=i;
        }
    }
    if(idx<0){
        cout<<"Element is not found in array and this index is "<<idx<<endl;
    }
    else{
        cout<<"Element is found in array and this index is "<<idx<<endl;
    }
    return 0;
}