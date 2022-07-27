#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
int binarySearch(int & n,vector <int>& vect){
    int L=0,R=vect.size(),c;
    while (L<R-1){
        c=(L+R)/2;
        if (n<vect.at(c)){
            R=c;
        }else{
            L=c;
        }
    }
    if (vect.at(L)==n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    vector <int> vect;
    srand(time(0));
    for (int i=0;i<100;i++){
        vect.push_back(rand()%1000+1);
    }
    sort(vect.begin(),vect.end());


    //binary search algorithm
    auto start1 = high_resolution_clock::now();//starting point
    cout<<binarySearch(n,vect)<<"\n";
    auto stop1 = high_resolution_clock::now();//ending point
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
    cout<<"Time taken by my algorithm: "
        <<duration1.count()<<" nanoseconds\n";
    
    //built-in function
    auto start2 = high_resolution_clock::now();//starting point
    cout<<binary_search(vect.begin(),vect.end(),n)<<"\n";
    auto stop2 = high_resolution_clock::now();//ending point
    auto duration2 = duration_cast<nanoseconds>(stop2 - start2);
    cout<<"Time taken built in function: "
        <<duration2.count()<<" nanoseconds\n";


}
