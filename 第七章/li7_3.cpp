#include<iostream>
using namespace std;
void n_chars(char,int);
int main(){
    int times; char ch;
    cout<<"Enter a character:";
    cin>>ch;
    while(ch!='q'){
        cout<<"Enter an integer:";
        cin>>times;
        n_chars(ch,times);
        cout<<"Enter q to quit";
        cin>>ch;
    }
    cout<<times<<endl;
    return 0;
}
void n_chars(char c,int n){
    while(n-->0){
        cout<<c;
    }
}
/*
带两个参数的函数
*/