#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

int main()
{
    int x;
    while( cin >> x )
    {
        if( x == 2 )
            cout<<"質數"<<endl;
        else if( x % 2 == 0 )
            cout<<"非質數"<<endl;
        else
        {
            int primeis = 1;
            for( int i = 3 ; i <= sqrt(x); i++ )
            {
                if( x % i == 0 )
                {
                    cout<<"非質數"<<endl;
                    primeis = 0;
                }
            }
            if( primeis )
                cout<< "質數"<<endl;
        }
    }
    return 0;
}
