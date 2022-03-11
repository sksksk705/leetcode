#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int letter[26]{ 0 };
        for (auto cs : s)
            letter[cs - 'a']++;
        for (auto ct : t)
            letter[ct - 'a']--;
        for (int i = 0; i < 26; ++i)
            if (letter[i] != 0)
                return false;
        return true;
    }
};