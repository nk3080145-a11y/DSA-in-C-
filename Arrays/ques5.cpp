// WAP to Calculate sum & product of all numbers in an array 
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
    int sum = 0;
    int product = 1;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout<<"The product of an array = "<<product<<endl;
    cout<<"The sum of an array = "<<sum<<endl;
    return 0;
}