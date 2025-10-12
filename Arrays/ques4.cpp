// Reverse an array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter a size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element in array : ";
        cin>>arr[i];
    }
    for(int i=0,j=size-1;i<j;i++,j--){
       swap(arr[i],arr[j]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}