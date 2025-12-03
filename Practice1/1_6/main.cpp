#include <iostream>
#include <string>

using namespace std;

int main(){
    string t, d;
    cout << "姓を入力:";
    cin >> t;
    cout << "命を入力:";
    cin >> d;
    cout << "名前は「" << t + d << "」です。" << endl;
    return 0;
}