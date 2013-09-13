/*************************************************************
Author: walking
Date: 2013.09.12
Description: function of factorize
Input: integer
Output: factorize of integer
AC (4ms, 360KB)
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int input;
    while (cin>>input){
        int flag=0;                     //代表前*後, flag為零代表前
        for (int i=2;i<=input;i++){
            int pow=0;
            while ((input%i)==0){
                input/=i;
                pow++;
            }
            if(pow==0)continue;         //如果這個數字次方為0, 跳過這次迴圈
            if(pow>1){
                if(flag==0){
                    cout << i << "^" << pow;    //flag 為零輸出前項, x^n
                    flag = 1 ;
                }else cout<< " * " << i << "^" << pow ; //flag 為1輸出後項, * x^n
            }else{
                if (flag==0){
                    cout<< i ;
                    flag = 1;
                }else cout << " * " << i ;
            }
        }
        cout <<endl;
    }
}
