#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a,b,c,ans1,ans2;
    while(cin>> a >> b >> c){
        ans1= ((-b)+pow(b*b-4*a*c,0.5))/(2*a);
        ans2= ((-b)-pow(b*b-4*a*c,0.5))/(2*a);
        if(b*b-4*a*c>0){
            cout << "Two different roots x1="<<ans1<<" , x2="<<ans2<<endl;
        }else if(b*b-4*a*c==0){
            cout << "Two same roots x="<<ans1<<endl;
        }else{
            cout << "No real root"<<endl;
        }
    }
return 0;
}
