#include <iostream.h>
using namespace std
//传参不改变实参
void main(){
    float a,b;
    cout<<"输入两个数："<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"两个数交换后为："<<a<<b<<endl;
}
void swap(float m ,float n){
    float temp;
    temp=m;
    m=n;
    n=temp;
}