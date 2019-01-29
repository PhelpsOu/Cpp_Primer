#include <string>
#include <vector>
#include <iostream>

using namespace std;
// 如果想用string来实现...
// 怎么样停止输入的while循环？？
// 姑且先用笨方法 输入单个Q结束
int main(){
    string str;
    vector<string> vstr;
    while (cin >> str) {
        if (str == "Q") break;
        else vstr.push_back(str);
    }
    for (auto vi : vstr){
        for (auto &c : vi)
            c = toupper(c);
        cout << vi << endl;
    }
    return 0;
}
