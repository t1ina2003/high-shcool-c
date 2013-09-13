/*************************************************************
Author: walking
Date: 2013.09.12
Description: a012: 10055 - Hashmat the Brave Warrior - the diff of two value
Input: two integer
Output: diff
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    long long int x,y;
    while (cin>>x>>y){
        cout << llabs(x-y) <<endl; //注意不是使用abs, 而是llabs
//        if (x>y)
//            cout << x-y <<endl;
//        else
//            cout << y-x <<endl;
    }
}



