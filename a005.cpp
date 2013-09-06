#include <iostream>
using namespace std;
int main() {
    string s;
    int lines,r;
    while(cin>> lines){
    int a[lines][5];
    for(int i=0;i<lines;i++){
        cin>> a[i][0]>> a[i][1]>> a[i][2]>> a[i][3];
        r=(a[i][1]/a[i][0]);
        if((a[i][1]-a[i][0])==(a[i][2]-a[i][1]))
            a[i][4]=a[i][0]+(a[i][1]-a[i][0])*4;
        if((a[i][1]/a[i][0])==(a[i][2]/a[i][1]))
            a[i][4]=a[i][0]*r*r*r*r;
    }
    for(int j=0;j<lines;j++){
        for(int k=0;k<5;k++){
            cout << a[j][k]<<" ";
        }
        cout<< endl;
    }
    }
return 0;
}
