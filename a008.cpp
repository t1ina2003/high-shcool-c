//參考http://ppt.cc/BnjL
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
string number[15] = {"零","壹","貳","參","肆","伍","陸","柒","捌","玖","拾"};
string value[15] = { "拾", "億", "仟", "佰", "拾", "萬", "仟", "佰", "拾", "" };

int main(){
    int num;
    //while (scanf("%d",num)!=EOF) //c寫法
    while(cin>>num){
        int divide_num[15]={};
        int digit=9;
        while (num){
            divide_num[digit--]=num%10;
            num /= 10;
        }
        /**排列方式為：
            digit = 0 1 2 3 4 5 6 7 8 9
            input =       1 2 3 4 5 6 7
        */
        for (int i=digit+1;i<10;i++){
            if (divide_num[i]!=0)
                cout << number[divide_num[i]]<<value[i] ;
            else if (i==1 || i==5)
                cout << value[i];
            else if (divide_num[i+1] != 0)
                cout << number[divide_num[i]];
        }
        cout << endl;
    }
}
