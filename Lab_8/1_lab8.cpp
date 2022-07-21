#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>
using namespace std;
int main(){
    int N,M,su=0;
    cin>>N>>M;
    int arr[N][M]={};
    srand(time(0));
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            arr[i][j]=rand()%21+(-10);
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            su+=abs(arr[i][j]);
        }
    }
    cout<<"Matrix"<<"\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"The absolute sum:"<<su<<"\n";
}