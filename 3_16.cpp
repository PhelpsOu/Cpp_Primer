#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(){

    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<string> v6{10};
    std::vector<string> v7{10, "hi"};

    std::vector<vector<int>> vint{v1, v2, v3, v4, v5};
    std::vector<vector<string>> vstr{v6, v7};

    for (auto vi : vint){
        for (auto i : vi)
            cout << i;
        cout << endl;
    }

    for (auto vi : vstr){
        for (auto i : vi)
            cout << i;
        cout << endl;
    }

    return 0;
}
