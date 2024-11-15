#include "trie.h"

#include "Trie.h"
using namespace std;

Trie::TrieNode::TrieNode() {
    pref = 0;
    end = 0;
    v.resize(26, nullptr);
}

Trie::Trie() {
    root = new TrieNode();
}

void Trie::insert( string word,book* b) {
    TrieNode* cursor = root;
    int i = 0;
    while (i < word.size()) {
        if (!(cursor->v[word[i] - 'a']))
            cursor->v[word[i] - 'a'] = new TrieNode();
        cursor = cursor->v[word[i] - 'a'];
        if (i != word.size() - 1) {
            cursor->pref++;
        }
        i++;
    }
    cursor->end++;
    cursor->books.push_back(b);
}


vector<book*> Trie::search(string word) {
    TrieNode* cursor = root;
    int i = 0;
    while (true) {
        if (!(cursor->v[word[i] - 'a']))
            return {};
        cursor = cursor->v[word[i] - 'a'];
        if (i == word.size() - 1) {
            if (cursor->end > 0) return cursor->books; else return {};
        }
        i++;
    }
}


bool Trie::startsWith(string prefix) {
    TrieNode* cursor = root;
    int i = 0;
    while (true) {
        if (!(cursor->v[prefix[i] - 'a']))
            return false;
        cursor = cursor->v[prefix[i] - 'a'];
        if (i == prefix.size() - 1) {
            return true;
        }
        i++;
    }
}
