#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;
int main(){
    cout<<"Welcome to Windows Timer version 1.0! This is full free software and opensource!"<<endl<<"Please enter time, format: (hour),(minutes),(seconds), if it is zero, write 0"<<endl;
    long long hh,mm,ss;
    cin>>hh>>mm>>ss;
    ss+=3600*hh;
    ss+=60*mm;
    system("cls");
    while(ss>1){
        system("ping -n 2 baidu.com > null");
        system("del null");
        ss--;
        long long hhh,mmm,sss;
        mmm=sss/60;
        sss-=mmm*60;
        hhh=mmm/60;
        mmm-=hhh*60;
    }
    Beep(523,800);
    system("mshta vbscript:msgbox(\"Time's up!\",64,\"Timer 1.0\")(window.close)");
    return 0;
}
