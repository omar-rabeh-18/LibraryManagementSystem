#ifndef TRIE_H
#define TRIE_H


#include <vector>
#include <string>
#include "book.h"
using namespace std;

class Trie {
public:
    struct TrieNode {
        int pref, end;
        vector<TrieNode*> v;
        vector<book*> books;
        TrieNode();
    };

    Trie();
    void insert(string word,book* b);
    vector<book*> search(string word);
    bool startsWith(string prefix);

private:
    TrieNode* root;
};

#endif // TRIE_H
