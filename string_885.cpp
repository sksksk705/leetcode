#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "")
            return 0;
        if (needle.size() > haystack.size())
            return -1;
        for (int i = 0; i < haystack.size(); ++i) {
            int appear = -1;
            if (needle[0] == haystack[i])
            {
                appear = i;
                if (i + needle.size() > haystack.size())
                    return -1;
                for (int j = 0; j < needle.size(); ++j) {
                    if (haystack[j + i] != needle[j])
                        appear = -1;
                }
            }
            if(appear != -1)
                return appear;
        }
        return -1;
    }
};