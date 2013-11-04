/*************************************************************
Author: walking
Date: 2013.09.12
Description: Roman number
Input:
Output:
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define N 7
using namespace std;

char roman[7] = {'M','D','C','L','X','V','I'};
int arabic[7] = {1000, 500, 100, 50, 10, 5, 1};

int i_abs(const int& t);
int to_arabic(char c);
int to_arabic(string s);
string to_roman(int t);

int main(){
    string s1,s2;
    while(cin>> s1>> s2){
        if(s1[0]=='#') break;
        cout << to_roman(i_abs(to_arabic(s1)-to_arabic(s2)))<<endl;
    }
}
/**免去引入math函數的龐大*/
inline int i_abs(const int& t){
    return (t>0)?t:-t;
}

inline int to_arabic(char c){
    for(int i=0;i<N;i++)
        if(c==roman[i])
            return arabic[i];
}
/**
    創一個string長度的array
    將讀取得的羅馬數字轉換成阿拉伯數字放入
    以tmp暫存最後一位數字
    swap過每一個數字，前小於後則減掉 例IV
    前大於後則加上 VIII
    相等不動作
*/
inline int to_arabic(string s){
    int length=s.length(),array[length];
    for(int i=0;i<length;i++)
        array[i]= to_arabic(s[i]);
    length--;
    int tmp = array[length];
    for(int i=0;i<length;i++){
        if (array[i]<array[i+1])
            tmp -= array[i];
        else
            tmp += array[i];
    }
    return tmp;
}
/**
    讀取阿拉伯數字 t
    以1000 ,100 ,10分別除法
    商數為4 or 9則顯示 IV , IX (分別跳一位、兩位)
    若不為4 or 9則分別以大於4或小於四分別作處理
*/
inline string to_roman(int t)
{
    if(t == 0)
        return "ZERO";

    string tmp;

    for(int i = 0; i < N; i += 2)
        {
        int j = t / arabic[i];
        if(j == 9)
            tmp.push_back(roman[i]), tmp.push_back(roman[i-2]);
        else if(j == 4)
            tmp.push_back(roman[i]), tmp.push_back(roman[i-1]);
        else
        {
            if(j>4)
                tmp.push_back(roman[i-1]),j -=5;
            for(int k=j;k>0;k--)
                tmp.push_back(roman[i]);
        }
        t %= arabic[i];
    }
    return tmp;
}

