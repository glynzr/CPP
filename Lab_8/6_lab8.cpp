//6 _lab 8
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main(){
    int n,k,su=0;
    cin>>n;
    while (true){
        cin>>k;
        if (-1<k and k<n){
            break;
        }
    }
    int A[n][n]={};
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
        su+=A[i][i];
    }
    cout<<"Bas diaqonal elementlerinin cemi:"<<su<<"\n";
    cout<<"B massivi: ";
    for (int i=0;i<n;i++){
        if (su!=0){
            float B[n]={};
            B[i]=A[k-1][i]/su;
            printf("%.2f\t",B[i]);
        }else{
            string B[n]={};
            B[i]="-";
            cout<<B[i]<<"\t";
        }
    }
    cout<<"\n";


}