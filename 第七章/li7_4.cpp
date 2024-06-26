#include<iostream>
long double probability(unsigned numbers,unsigned picks);
int main(){
    using namespace std;
    double total,choices;
    while((cin>>total>>choices)&&choices<=total){
        cout<<"You have one chance in";
        cout<<probability(total,choices);
        cout<<" of winning.\n";
        cout<<"Next two numbers (q to quit):";
    }
    cout<<"bye\n";
    return 0;
}
long double probability(unsigned numbers,unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for(n=numbers,p=picks;p>0;n--,p--){
        result = result*n/p;
    }
    return result;
}
/* 带两个参数的函数。 */