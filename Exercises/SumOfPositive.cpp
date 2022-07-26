#include <iostream>
using namespace std;
int main(){
    int n,x,su=0;
    cin>>n;
    int arr[n][n]={};
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>x;
            arr[i][j]=x;
            if (x>0){
                su+=x;
            }
        }
    }
    cout<<su<<"\n";
}