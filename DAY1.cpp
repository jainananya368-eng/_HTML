#include <iostream>
using namespace std;
int main(){
    int p,c,m;
    cout <<"enter marks in three subject";
    cin >> p >> c >>m;
    cout << p <<"\n" << c << "\n"<<m;
    if (p>40 && c>40 && m>40 && ((p+c+m)/100)>33){
        cout <<"PASS";
    }
    else {
        cout <<"FAIL";
    }
}
