#include<iostream>
/*
switch和枚举一起使用
*/
enum{red,orange,yellow,green,blue,violet,indigo};//0~6
int main(){
    using namespace std;
    cout<<"Enter color code (0-6):";
    int code;
    cin>>code;
    while(code>=red&&code<=indigo){
        switch (code)
        {
        case red:
            cout<<"red\n";
            break;
        case orange:
            cout<<"orange\n";
            break;
        case yellow:
            cout<<"yellow\n";
            break;
        case green:
            cout<<"green\n";
            break;
        case blue:
            cout<<"blue\n";
            break;
        case violet:
            cout<<"violet\n";
            break;
        case indigo:
            cout<<"indigo\n";
            break;
        default:
            break;
       }
        cout<<"Enter color code (0-6):";
        cin>>code;
    }
}