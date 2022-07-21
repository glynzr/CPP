#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>
using namespace std;
int main(){
    int n,su=0;
    cin>>n;
    float A[n][n]={};
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

    for (int i=0;i<n;i++){
        if (i%2==0){
            for (int j=0;j<n;j++){
                if (su!=0){
                    A[i][j]/=su;
                }else{
                    A[i][j]=0;
                }
            }
        }
    }

    cout<<"New matrix\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%.2f\t",A[i][j]);
        }
        cout<<"\n";
    }
}