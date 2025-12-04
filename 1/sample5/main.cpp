#include <iostream>
#include <string>
using namespace std;

// 返り値がないのでvoidを指定
void hello(string text){
    cout << "Hello, " << text << endl;
    return;
}

int main(){
    hello("Tom");
    hello("C++");
}