// decimal to binary
#include<iostream>
using namespace std;
int decimalTobinary(int decimalNum){
    int power = 1;
    int ans = 0;
    int remainder = 0;
    for(int i=0;decimalNum>0;i++){
        remainder = decimalNum % 2;
        decimalNum /= 2;
        ans = ans + (remainder * power);
        power *= 10;
    }
    return ans;
}
int main(){
    int decimalNum;
    cout<<"Enter a decimal number : ";
    cin>>decimalNum;
    cout<<decimalTobinary(decimalNum)<<endl;
    return 0;
}