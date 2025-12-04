#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;

    str = "abcd";

    cout << str.at(0) << endl;

    cout << str.size() << endl;

    // 配列
    vector<int> vec;  // int型の配列
    vec = {25, 100, 64};
    cout << vec.at(0) << endl;
    cout << vec.size() << endl;
}