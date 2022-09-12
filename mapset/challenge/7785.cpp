#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    set<string> string_set;
    for (int n_idx = 0; n_idx < n; n_idx++) {
        string sub_name, sub_work;
        cin >> sub_name >> sub_work;

        if ( sub_work == "enter" )
            string_set.insert(sub_name);
        else
            string_set.erase(sub_name);
    }

    for (auto iter = string_set.rbegin(); iter != string_set.rend(); iter++)
        cout << *iter << "\n";

    return 0;
}
