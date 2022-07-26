#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n]={},x;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>x;
            arr[i][j]=x;
        }
    }
    int Su1=0,Su2=0;
    for (int i=0;i<n;i++){
        Su1+=arr[i][i];
        Su2+=arr[i][n-1-i];
    }
    cout<<Su1<<" "<<Su2<<endl;
}