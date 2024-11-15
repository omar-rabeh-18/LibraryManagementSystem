#include "trie.h"

#include<QDebug>
using namespace std;

Trie::TrieNode::TrieNode() {
    pref = 0;
    end = 0;
    v.resize(26, nullptr);
}

Trie::Trie() {
    root = new TrieNode();
}
void Trie::insert(QString word, book* b) {
    TrieNode* cursor = root;
    int i = 0;

    // Loop through each character in the word
    while (i < word.size()) {
        // Convert QChar to char and subtract 'a' to get the index
        char c = word[i].toLower().toLatin1(); // Convert QChar to char
        int index = c - 'a'; // Calculate the index for the character

        // If the node for that character doesn't exist, create a new TrieNode
        if (!(cursor->v[index])) {
            cursor->v[index] = new TrieNode();
        }

        // Move to the next node in the Trie
        cursor = cursor->v[index];

        // Increment prefix count if not the last character in the word
        if (i != word.size() - 1) {
            cursor->pref++;
        }
        i++;
    }

    // Mark the end of the word and add the book to the list
    cursor->end++;
    cursor->books.push_back(b); // Add the book to the books list
    qDebug()<<"inserted "<<word;
}


vector<book*> Trie::search(QString word) {
    TrieNode* cursor = root;
    int i = 0;

    while (i < word.size()) {
        // Convert QChar to char and subtract 'a' to get the index
        char c = word[i].toLower().toLatin1(); // Convert QChar to char
        int index = c - 'a'; // Calculate the index for the character

        // If the node for that character doesn't exist, return an empty vector
        if (!(cursor->v[index])) {
            return {}; // Return an empty vector
        }

        // Move to the next node in the Trie
        cursor = cursor->v[index];

        // If we reached the end of the word, check if it's a valid word
        if (i == word.size() - 1) {
            if (cursor->end > 0) {
                return cursor->books; // Return the list of books if it's a valid word
            } else {
                return {}; // Return an empty vector if it's not a valid word
            }
        }

        i++;
    }
    return {}; // In case the loop completes, return an empty vector (shouldn't happen)
}


bool Trie::startsWith(QString prefix) {
    TrieNode* cursor = root;
    int i = 0;

    while (i < prefix.size()) {
        // Convert QChar to char and subtract 'a' to get the index
        char c = prefix[i].toLower().toLatin1(); // Convert QChar to char
        int index = c - 'a'; // Calculate the index for the character

        // If the node for that character doesn't exist, return false
        if (!(cursor->v[index])) {
            return false; // Prefix doesn't exist
        }

        // Move to the next node in the Trie
        cursor = cursor->v[index];

        i++;
    }

    // If we get here, it means the prefix exists in the Trie
    return true;
}
