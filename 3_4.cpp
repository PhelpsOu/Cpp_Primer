#include <string>
#include <iostream>

using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    
    if (str1 == str2)
        cout << "str1 equals str2!" << endl;
    else if (str1 > str2)
        cout << str1 << endl;
    else
        cout << str2 << endl;

    if (str1.size() > str2.size())
        cout << str1 << endl;
    else if (str1.size() < str2.size())
        cout << str2 << endl;
    else
        cout << "str1 and str2 have the same size!" << endl;

    return 0;
}
