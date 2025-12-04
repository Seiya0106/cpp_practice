#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int a = 10, b = 5;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    vector<int> vec = { 1, 5, 3 };
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }
}