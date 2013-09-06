#include <iostream>
using namespace std;
int main() {
    string s;
    int year;
    while(cin>> year){
    s="";
    if (year%4 == 0 && year%100 != 0 || year%400 == 0){
        s += "閏年";
    }else{
        s += "平年";
    }
    cout << s << endl;
    }
return 0;
}
