#include<iostream>
const int ArSize = 8;
/* 使用两个指针表示数组的区间. */
int sum_arr(const int *begin,const int *end);
int main(){
    using namespace std;
    int cookies[ArSize]={1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies,cookies+ArSize);
    cout<<"sum:"<<sum<<endl;
    sum=sum_arr(cookies+4,cookies+8);
    cout<<"sum:"<<sum<<endl;
    return 0;
}
int sum_arr(const int * begin,const int *end){
    const int *pt;
    int total = 0;
    for(pt=begin;pt!=end;pt++){
        total = total + *pt;
    }
    return total;
}
/*
sum:255
sum:240
*/