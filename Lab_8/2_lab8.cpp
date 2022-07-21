#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    int N,M;
    long int p=1;
    cin>>N>>M;
    int arr[N][M]={};
    srand(time(0));
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            arr[i][j]=rand()%21+(-10);
            p*=pow(arr[i][j],2);
        }
    }
    //printing matrix
    cout<<"Matrix\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"The product of elements' square:"<<p<<"\n";

}