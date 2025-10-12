// linear search with funtion
#include<iostream>
using namespace std;
int linersearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[7] = {4,2,7,8,1,2,5};
    int target = 8;
    cout<<linersearch(arr,7,target)<<endl;
    return 0;
}