/*************************************************************
Author: walking
Date: 2013/09/11
Description: decoder of a009
Input: string
Output: string
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    const int k=7;
    string s;
    while (getline(cin,s)){             //可以這樣使用輸入
        for(int i=0;i<s.length();i++)   //string 靈活度很高
            s[i]-=7;                    //可存取每一個字元
        cout<< s << endl;
    }
}
