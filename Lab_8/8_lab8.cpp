#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n][n]={},B[n]={};
    srand(time(0));
    cout<<"A matrix\n";
    for (int i=0;i<n;i++){
        int su=0;
        for (int j=0;j<n;j++){
            A[i][j]=rand()%21+(-10);
            su+=A[i][j];
            cout<<A[i][j]<<"\t";
        }
        B[i]=su;
        cout<<"\n";
    }
    cout<<"B array: ";
    for (int i=0;i<n;i++){
        cout<<B[i]<<" ";
    }
    cout<<"\n";
}