#include <iostream>
#include <algorithm>
using namespace std;
void print(long long x){
    if(x==0){
        system("figlet Time\\'s up!");
        system("say Times up");
        system("say 时间到");
        return;
    }
    cout<<x/3600<<" Hours ";
    x%=3600;
    cout<<x/60<<" Minutes ";
    x%=60;
    cout<<x<<" Seconds to Stop"<<endl;
    return;
}
int main(){
    cout<<"Welcome to timer version 1.3 for Mac. This version is now open to MacOS users."<<endl;
    cout<<"Please input the time you want: HH(hour) MM(minute) SS(second). If there is no need for an option, type 0 under it."<<endl;
    int hrs,ms,s;
    cin>>hrs>>ms>>s;
    long long sec;
    sec=3600*hrs+60*ms+s;
    while(sec){
        system("sleep 1");
        system("clear");
        sec--;
        print(sec);
    }
    return 0;
}
