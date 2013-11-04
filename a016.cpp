/*************************************************************
Author: walking
Date: 2013_10_26
Description: a016: 數獨(SUDOKU)
Input:   9 x 9 Matrix
Output:     yes/no
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    int R,C,input;
    while(cin >> R >> C){                 //plz input Matrix "row" "column"
        int A[R][C],B[C][R];              //declare A,B array with R*C size
        memset(A, 0, sizeof(int)*R*C);    //clear array
        memset(B, 0, sizeof(int)*R*C);

        for (int i=0;i<R;i++)             //double loop input
            for (int j=0;j<C;j++){
                cin>>input;
                A[i][j]=input;
            }

        for (int i=0;i<C;i++){            //inverse display
            for (int j=0;j<R;j++){
                cout<<A[j][i]<<" ";
            }
            cout<<endl;
        }
    }

}
