// Binary to decimal
#include<iostream>
using namespace std;
int binaryToDecimal(int binaryNum){
    int ans = 0;
    int power = 1;
    int lastdigit = 0;
    for(int i=0;binaryNum>0;i++){
        lastdigit = binaryNum%10;
        binaryNum /= 10;
        ans = ans + (lastdigit*power);
        power *= 2;
    }
    return ans;
}
int main(){
    int binaryNum;
    cout<<"Enter a binary number : ";
    cin>>binaryNum;
    cout<<binaryToDecimal(binaryNum)<<endl;
    return 0;
}