/*************************************************************
Author: walking
Date: 2013_10_09
Description: lucky dip game
Input:  N(amount of toy) Y(range of dipper) A(toy start) B(toy end)
Output: max_count(best localtions) tmp(the maximum dip amount)
*************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

//X 0 to infinity

int main(){
    int N=0,Y=0,A=0,B=0;
    while(cin >> N >> Y){
        int A[N],B[N];
        memset(A, 0, sizeof(int)*N);
        memset(B, 0, sizeof(int)*N);
        //int *left = (int *)calloc(N, sizeof(int));
        //等同於 memset(left, 0, sizeof(int)*N);
        int max_A = 0 ,tmp1=0;

        for(int i=0;i<N;i++){                  //輸入 Toy 位置
            cin>>A[i]>>B[i];
            tmp1=A[i];
            if(tmp1>max_A)
                max_A=tmp1;
        }

        int left[max_A+1];
        memset(left, 0, sizeof(int)*(max_A+1));

        for(int i=0;i<N;i++){
            if((B[i]-A[i])<=Y)                //if 物體沒有大於夾子，則投票可夾起區域
                for(int j=B[i]-Y;j<=A[i];j++){
                    if(j>0)
                        left[j]++;}
        }


        int max_count=0;                //計算最大值有幾個
        int tmp=left[0];                //初始化最大值

        for(int k=1;k<=max_A;k++)//找出最大值
        {
            if(left[k]==tmp)
                max_count++;

            if(left[k]>tmp)
            {
                tmp=left[k];
                max_count=1;
            }
        }

        cout <<max_count<<" "<<tmp<<endl;
    }

}
