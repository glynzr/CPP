#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n][n]={},B[n][n]={},C[n][n]={};
    srand(time(0));
    cout<<"A matrix:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            A[i][j]=rand()%21+(-10);
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"B matrix:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            B[i][j]=rand()%21+(-10);
            cout<<B[i][j]<<"\t";
        }
        cout<<"\n";
    }
    //C=A**2+B**2
    cout<<"C matrix:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            C[i][j]=pow(A[i][j],2)+pow(B[i][j],2);
            cout<<C[i][j]<<"\t";
        }
        cout<<"\n";
    }
}