/*************************************************************
Author: walkingu
Date:   2013/10/25
Description:    LED decoder - decode alphabet
Input:  a stream of num
Output: alphabet
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;

int main(){
    map<string, char> code;
    code["123457"] = 'A', code["1234567"] = 'B';
    code["456"] = 'C', code["1580"] = 'D';
    code["12456"] = 'E', code["1249"] = 'F';
    code["12569"] = 'G', code["13457"] = 'H';
    code["37"] = 'I', code["3567"] = 'J';
    code["13459"] = 'K', code["156"] = 'L';
    code["12357"] = 'M', code["3579"] = 'N';
    code["123567"] = 'O', code["1458"] = 'P';
    code["12347"] = 'Q', code["123459"] = 'R';
    code["12467"] = 'S', code["278"] = 'T';
    code["13567"] = 'U', code["1379"] = 'V';
    code["135790"] = 'W', code["90"] = 'X';
    code["1347"] = 'Y', code["23456"] = 'Z';

    char s[1024];
    while(gets(s)){
        int i,j;
        for (i=0;s[i];i++)
        {
            if(s[i] < '0' || s[i] > '9')
                putchar(s[i]);                  // print which isn't number
            else
            {
                j = i;
                int flag = 0;
                while(s[i+1] <= '9') {
                    i++;                        // add range from jth to NULL
                    int tmp = s[i+1];
                    s[i+1] = 0;                 // 0 means NULL
                    if(code.find(s+j) != code.end())  //from the j th word scan till NULL
                    {
                        putchar(code[s+j]);     //put one alphabet to screen
                        flag = 1;
                        s[i+1] = tmp;
                        break;
                    }
                    s[i+1] = tmp;               //put the number back
                }
                if(!flag)   putchar(' '), i = j;
            }
        }
        puts("");                       //shift line!
    }
	return 0;
}
