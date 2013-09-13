/*************************************************************
Author: walking
Date: 2013.09.12
Description: Kindergarten Counting Game - count words in every line.
intput: (string) one line text.
Output: (int) numbers of words
AC (4ms, 440KB)
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    string s;
    while (getline(cin,s)){             //將輸入存入string內
        int num=0;                      // num 為 words 數量
        bool flag=0;                    // 是否為文字結尾
        for(int i=0;i<s.length();i++){
            //if( (s[i]>='A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){ //字元以ascii code 來量化
            if (isalpha(s[i]))          //更便捷的方式
            {
                if( !flag )
                {
                    flag = 1;
                    num++;
                }
            }
            else
                flag = 0;
        }
        cout << num << endl ;
    }
}
