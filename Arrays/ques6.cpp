// WAP to swap the max and min number of an array 
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<"Element of an array : ";
        cin>>arr[i];
    } 
    int min = INT32_MAX , min_idx;
    int max = INT32_MIN , max_idx;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
            min_idx = i;
        }
        if(max<arr[i]){
            max = arr[i];
            max_idx = i;
        }
    }
    swap(arr[min_idx],arr[max_idx]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}