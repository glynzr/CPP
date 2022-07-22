#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    int n;
    cout<<"Matrix size:";
    while (true){
        cin>>n;
        if (n>1){
            break;
        }
    }
    int A[n][n]={};
    cout<<"Matrix:\n";
    srand(time(0));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            A[i][j]=rand()%20+1;
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            A[i][j]%=2;
        }
    }

    cout<<"Output:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }



}