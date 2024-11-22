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
    void insert(QString word,book* b);
    vector<book*> search(QString word);
    bool startsWith(QString prefix);
    int charToIndex(char c);
private:
    TrieNode* root;
};

#endif // TRIE_H
