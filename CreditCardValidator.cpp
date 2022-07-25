#include <iostream>
#include <regex>
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

int LuhnAlgorithm(string x){
    int arr[x.length()]={},SU=0;
    for (int i=0;i<x.length();i++){
        arr[i]=(int (x[i]))-48;
    }
    //doubling the value of every single digit(2 increment)
    for (int i=1;i<x.length();i+=2){
        arr[i]*=2;
    }
    //checking whether number elements is greater than 9
    bool flag=false;
    for (int i=1;i<x.length();i+=2){
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
    if ((SU*9)%10== (int (x[x.length()-1]))-48){
        return true;
    }else{
        return false;
    }
}

int main(){
    string cardType,cardNumber;
    cout<<"Enter the car type(Visa\\Mastercard:";
    cin>>cardType;
    regex Visa("^(4[0-9]{15})$");
    regex MasterCard("^(5[0-5]{1}[0-9]{14})$");
    if (cardType=="Visa" or cardType=="MasterCard"){
        cout<<"Enter card number:";
        cin>>cardNumber;
        if (cardType=="Visa"){
            if (regex_match(cardNumber,Visa) and LuhnAlgorithm(cardNumber)){
                cout<<"Valid card number!\n";
            }else{
                cout<<"Invalid card number!\n";
            }
        }else{
            if (regex_match(cardNumber,MasterCard) and LuhnAlgorithm(cardNumber)){
                cout<<"Valid card number!\n";
            }else{
                cout<<"Invalid card number!\n";
            }

        }
    }else{
        cout<<"Invalid data\n";
    }
}
