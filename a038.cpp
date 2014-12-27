/*************************************************************
Author: walking
Date: 2014_12_27
Description: a038: 數字翻轉
Input:   輸入包含一個整數，不超過 2^31
Output:     輸出翻轉過後的數字
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    int num;

    while(cin>>num){
        int num_revers = 0;
        while(num)
        {
            num_revers *= 10;
            num_revers += num %10;
            num /= 10;
        }
        cout<< num_revers ;
    }

}
