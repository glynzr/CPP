#include <iostream>
#include <map>
#include <cmath>
#include <string>
using namespace std;
int main(){
    map <string ,map<string,long int>> myDict;
    //Asia
    myDict["Asia"]["population"]=4545133094;
    myDict["Asia"]["area"]=31033131;
    
    //Africa
    myDict["Africa"]["population"]=1287920518;
    myDict["Africa"]["area"]=29648481;

    //Europe
    myDict["Europe"]["population"]=742648010;
    myDict["Europe"]["area"]=221334900;

    //North America
    myDict["North America"]["population"]=587615976;
    myDict["North America"]["area"]=221329926;

    //South America
    myDict["South America"]["population"]=428240515;
    myDict["South America"]["area"]=17461112;

    //Australia/Oceania
    myDict["Australia/Oceania"]["population"]=41261212;
    myDict["Australia/Oceania"]["area"]=8486460;

    //Antarctica
    myDict["Antarctica"]["population"]=0;
    myDict["Antarctica"]["area"]=13720000;

    for (auto& x:myDict)
        if (x.second["population"]>pow(10,9)){
            cout<<x.first<<"\n";
        }

    return 0;

    
}