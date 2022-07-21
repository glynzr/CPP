#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
int n;
void matrixFilling(int arr[n][n]){
    srand(time(0));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr[i][j]=rand()%21+(-10);
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }

}
int main(){
    cin>>n;
    int A[n][n]={},B[n][n]={},C[n][n]={};

}