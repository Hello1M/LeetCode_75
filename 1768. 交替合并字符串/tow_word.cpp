#include<iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        size_t len = 0;
        string word3;
        while (len < word1.length() || len < word2.length()) {
            if (len < word1.length()) {
                word3 += word1[len];
            }

            if (len < word2.length()) {
                word3 += word2[len];
            }
            len++;
        }

        return word3;
    }
};