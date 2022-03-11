#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        /*bool visited[100000];
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < s.size(); ++i) {
            if (visited[i])
                continue;
            bool repeat = false;
            for (int j = i + 1; j < s.size(); ++j) {
                if (s[i] == s[j]) {
                    repeat = true;
                    visited[j] = true;
                }
            }
            if (!repeat)
                return i;
        }
        return -1;*/

        //해쉬맵을 이용해서 1번만 탐색하는 경우도 가능
        unordered_map<char, int> hash;
        int ans = INT_MAX;
        for (int i = 0; i < s.size(); ++i) {
            if (hash[s[i]])
                hash[s[i]] = INT_MAX;
            else
                hash[s[i]] = i+1;       //0이면 if문에서 걸러짐.
        }
        for (auto h : hash)
            ans = min(ans, h.second);
        return (ans == INT_MAX) ? -1 : ans-1;//1을 빼줌
    }
};