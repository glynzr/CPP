//Luhn Algorithm
#include <iostream>
#include <string>
using namespace std;
int digitSum(int x){
    int su=0;
    while (x>0){
        su+=x%10;
        x/=10;
    }
    return su;
}

int main(){
    long int cardNo;
    cout<<"Enter the number:\n";
    cin>>cardNo;
    int arr[ (int) to_string(n).length()]={},i=0,SU=0;
    while (cardNo>0){
        arr[i]=cardNo%10;
        cardNo/=10;
        i++;
    }
    //doubling the value of every single digit
    for (int i=1;i<sizeof(arr)/sizeof(int);i+=2){
        arr[i]*=2;
    }
    //checking whether number elements is greater than 9
    bool flag=false;
    for (int i=1;i<sizeof(arr)/sizeof(int);i+=2){
        if (arr[i]>9){
            flag=true;
            break;
        }
    }
    //If at least one value is greater than 9 we should find
    //the sum of digits of the values
    if (flag){
        for (int i=1;i<sizeof(arr)/sizeof(int);i+=2){
            arr[i]=digitSum(arr[i]);
        }
    }
    //finding the sum of all values
    for (int i=0;i<sizeof(arr)/sizeof(int);i++){
        SU+=arr[i];
    }
    if (SU%10==0){
        cout<<"Valid!\n";
    }else{
        cout<<"Invalid\n";
    }
}