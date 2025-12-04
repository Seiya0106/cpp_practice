#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;

  int cnt = 1;
  // ここにプログラムを追記
  for (int i = 0; i < S.size(); i++){
    if (S.at(i) == '+'){
        cnt++;
    }
    else if (S.at(i) == '-'){
        cnt--;
    }
  }
  cout << cnt << endl;
}
