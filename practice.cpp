#include <iostream>
using namespace std;
int main()
{
    int j,i;
    
    for(i=100;i>=1;--i){
        cout<<i;
    }
    
    for(i=1; i<=10;++i){
        cout<<21*i <<" ";
    }
    
    for(i=2;i<=20;++i){
        for(j=1;i<=10;++j){
            cout<<i*j<<endl;
        }
    }
    
    for(i=20; i>=1;--i){
        for(j=10; i>=1; --i){
            cout<<j*i<<endl;
        }
    }
    
    int sum=0;
    for(i=1;i<=3;++i)
    {
        sum=i+sum;
        
    }
    cout<<sum;
    
    int factorial=1;
    for(i=1;i<=4;++i){
        factorial=factorial*i;
    }
    cout<<factorial;

int num=2;
int power=3;
int sum=1;
for(i=1;i<=3;++i){
    sum=sum*num;
}
cout<<sum;

for(i=0;i<=256;++i){
    cout<<"aman"<<i<<"="<<char(i)<<endl;
}

int number=7;
for(i=1;i<=7;i++){
    if(number%i==0){
        cout<<i;
    }
}
    
    int number=12345;
    int rv;
    for(i=1;number!=0;){
        rv=rv*10+number%10;
        number=number/10;
    }
    cout<<rv;
    
    int num=121;
    int num1=num;
    int rv;
    for(;num<=0;){
        rv=rv*10+num%10;
        num=num/10;
        if(num1==rv){
            cout<<"palindrom";
        }
        else{
            cout<<"not a pallidnrom";
        }
    }