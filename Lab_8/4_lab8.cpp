//4 _lab 8
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    int N,M,K;
    long int p=1;//product
    cin>>N>>M;
    while (true){
        cin>>K;
        if (K>-1 and K<N){
            break;
        }
    }
    int A[N][M]={};
    srand(time(0));
    cout<<"A matrix:\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            A[i][j]=rand()%21+(-10);
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for (int i=0;i<M;i++){
        p*=A[K][i];

    }
    cout<<"Product:"<<p<<"\n";

}