#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    int k;
    cin>>n>>k;
    cout<<n[k-1]<<" "<<n[n.length()-k]<<"\n";
    return 0;

}