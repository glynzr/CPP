#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    int N,M,su=0;
    cin>>N>>M;
    int A[N][M]={};
    srand(time(0));
    cout<<"A matrix\n";
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            A[i][j]=rand()%21+(-10);
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
    int x=0,y=0;//min number's location (default)
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (A[x][y]>A[i][j]){
                x=i,y=j;
            }
        }
    }
    cout<<"Min number:"<<A[x][y]<<"\n";
    for (int i=0;i<N;i++){
        su+=A[i][y];
    }
    cout<<"Sum:"<<su<<"\n";
    
}