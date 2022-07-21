//5 lab 8
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    int n,k,m;
    cin>>n;
    while (true){
        cin>>k>>m;
        if (-1<k and k<n and -1<m and m<n){
            break;
        }
    }
    int A[n][n]={},B[n]={};
    srand(time(0));
    cout<<"A matrix\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            A[i][j]=rand()%15+1;
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"B array: ";
    for (int i=0;i<n;i++){
        B[i]=A[k][i]*A[i][m];
        cout<<B[i]<<" ";
        }
    cout<<"\n";


}