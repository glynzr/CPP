#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;
map <string, map<string,string>>colors;

string ColorCode4( string color[4]){
    long int RE=stoi(colors[color[0]]["digits"]+colors[color[1]]["digits"])*pow(10,stoi(colors[color[2]]["magnitude"]));
    string A=to_string(RE)+colors[color[3]]["tolerance"];
    return A;
}

string ColorCode5(string color[5]){
    long int RE=stoi(colors[color[0]]["digits"]+colors[color[1]]["digits"]+colors[color[2]]["digits"])*pow(10,stoi(colors[color[3]]["magnitude"]));
    string A=to_string(RE)+colors[color[4]]["tolerance"];
    return A;
}



int main(){

    //black
    colors["black"]["digits"]="0";
    colors["black"]["magnitude"]="0";
    colors["black"]["tolerance"]="-";

    //brown
    colors["brown"]["digits"]="1";
    colors["brown"]["magnitude"]="1";
    colors["brown"]["tolerance"]="+/-1%";
    
    //red
    colors["red"]["digits"]="2";
    colors["red"]["magnitude"]="2";
    colors["red"]["tolerance"]="+/-2%";
    
    //orange
    colors["orange"]["digits"]="3";
    colors["orange"]["magnitude"]="3";
    colors["orange"]["tolerance"]="-";
    
    //yellow
    colors["yellow"]["digits"]="4";
    colors["yellow"]["magnitude"]="4";
    colors["yellow"]["tolerance"]="-";
    
    //green
    colors["green"]["digits"]="5";
    colors["green"]["magnitude"]="5";
    colors["green"]["tolerance"]="+/-0.5%";
    
    //blue
    colors["blue"]["digits"]="6";
    colors["blue"]["magnitude"]="6";
    colors["blue"]["tolerance"]="+/-0.25%";
    
    //violet
    colors["violet"]["digits"]="7";
    colors["violet"]["magnitude"]="7";
    colors["violet"]["tolerance"]="+/-0.1%";
    
    //gray
    colors["gray"]["digits"]="8";
    colors["gray"]["magnitude"]="8";
    colors["gray"]["tolerance"]="+/-0.05%";
    
    //white
    colors["white"]["digits"]="9";
    colors["white"]["magnitude"]="9";
    colors["white"]["tolerance"]="-";
    
    //gold
    colors["gold"]["digits"]="-";
    colors["gold"]["magnitude"]="-1";
    colors["gold"]["tolerance"]="+/-5%";
    
    //silver
    colors["silver"]["digits"]="-";
    colors["silver"]["magnitude"]="-2";
    colors["silver"]["tolerance"]="+/-5%";
    
    int n;//n is color number
    cout<<"Enter the color number(4 or 5)->";
    while (true){
        cin>>n;
        if (n==4 or n==5){
            break;
        }
    }
    string arr[n]={};//colors' name array and color name
    string a;
    for (int i=1;i<n+1;i++){
        cout<<i<<".";
        cin>>a;
        arr[i-1]=a;
    }
    if (n==4){
        cout<<"Result->"<<ColorCode4(arr)<<endl;
    }else{
        cout<<"Result->"<<ColorCode5(arr)<<endl;
    }

}
