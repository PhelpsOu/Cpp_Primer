#include <string>
#include <iostream>

using namespace std;

int main(){
    string str = "I love LJY!";
    for (auto &c : str)
        c = 'X';
    cout << str << endl;
}
