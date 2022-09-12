#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int num;
    while (scanf("%d", &num) != EOF)
        v.push_back(num);
    int sum = v.back();
    v.pop_back();
    sort(v.begin(), v.end());
    map<pair<int, int>, bool> visited;
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
        for (int j = i + 1; j < v.size(); j++)
            if (v[i] + v[j] == sum && !visited.count({ v[i], v[j] }))
            {
                cout << v[i] << " " << v[j] << "\n";
                visited[{v[i], v[j]}] = true;
                cnt++;
            }
    cout << cnt << "\n";
    return 0;
}