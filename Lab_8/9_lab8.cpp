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
        for (int j=0;j<n;j++){
            A[i][j]=rand()%21+(-10);
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for (int i=0;i<n;i++){
        int p=1;
        for (int j=0;j<n;j++){
            p*=A[j][i];

        }
        B[i]=p;
    }
    cout<<"B array:";
    for (int i=0;i<n;i++){
        cout<<B[i]<<"\t";
    }
    cout<<"\n";
}