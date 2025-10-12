// Waf to print intersection of 2 array 
#include<iostream>
using namespace std;
int main(){
    int size1;
    cout<<"Enter the size of first array : ";
    cin>>size1;
    int arr1[size1];
    for(int i=0;i<size1;i++){
        cout<<"Enter "<<i+1<<"Element of an array : ";
        cin>>arr1[i];
    }
    int size2;
    cout<<"Enter the size of second array : ";
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cout<<"Enter "<<i+1<<"Element of an array : ";
        cin>>arr2[i];
    }
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}