#include<iostream>
#include<unistd.h>
#include<windows.h>
using namespace std;
int main(){
    int jam=0,menit=0,detik=0;
    while(true){
        system("cls");
        cout<<jam<<" : "<<menit<<" : "<<detik<<endl;
        detik++;
        if(detik==60){
            menit++;
            detik=0;
            if(menit==60){
                jam++;
                menit=0;
                if(jam==24){
                    jam=0;
                }
            }
        }
        sleep(1);
    }
    return 0;
}
