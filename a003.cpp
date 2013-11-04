#include <iostream>
using namespace std;
int main() {
    string s;
    int M,D;
    while(cin>> M>>D){
        s="";
        switch((M*2+D)%3){
            case 0:
            s += "普通";break;
            case 1:
            s += "吉";break;
            case 2:
            s += "大吉";break;
        }
        cout << s << endl;
    }
return 0;
}
