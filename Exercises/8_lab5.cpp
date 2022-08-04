#include  <iostream>
#include <map>
using namespace std;
int main(){
    map <string,string> users;
    string userName,userPassword;
    cout<<"Enter your username:";
    cin>>userName;
    cout<<"Enter your password:";
    cin>>userPassword;
    users["maximus"]="password1";
    users["asterix"]="password2";
    users["starrex"]="password3";
    bool flag=false;
    for (auto& x:users)
        if (x.first==userName){
            flag=true;
            break;
        }
    if (flag){
        if (users[userName]==userPassword){
            cout<<userName<<",welcome to the system\n";
        }else{
            cout<<"Wrong username or password!\n";
        }
    }else{
        cout<<"Wrong username or password!\n";
    }
    return 0;

}