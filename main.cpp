
#include <iostream>
#include <math.h>
using namespace std;

float f(int n){
    float y;
    y= (pow(n,2))*(cos(n))+1;
    return y;
}

int main(){
    float a,b,x;

    do{
        cout<<"inserire estremi"<<endl;
        cin>>a;
        cin>>b;
    }while(f(a)*f(b)>=0 || a>b);

    float err;

    do {
        x=(a+b)/2;
        if(f(x)==0.0){
            break;
        }
        else if(f(a)*f(x)>0){
            a=x;
        }else{
            b=x;
        }
        err=abs((b-a)/2);
    }while(err > 1e-6);

    cout << x << endl;
    cout << f(x) << endl;

    return 0;
}
