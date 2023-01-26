#include <iostream>
#include <string>

using namespace std;

int main(){
    int troom, tcond;
    string mode;
    cin >> troom >> tcond;
    cin >> mode;

    if(mode == "freeze"){
        cout << min(troom, tcond);
    }
    else if(mode == "heat"){
        cout << max(troom, tcond);
    }
    else if(mode == "auto"){
        cout << tcond;
    }
    else if(mode == "fan"){
        cout << troom;
    }
}