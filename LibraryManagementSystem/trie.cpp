#include "trie.h"
#include <QDebug>
using namespace std;

Trie::TrieNode::TrieNode() {
    pref = 0;
    end = 0;
    v.resize(37, nullptr); // Resize to handle 26 letters + 10 digits + 1 dash
}

Trie::Trie() {
    root = new TrieNode();
}

// Map a character to an index in the range [0-36]
int Trie::charToIndex(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a'; // Map 'a' to 0, 'b' to 1, ..., 'z' to 25
    }
    if (c >= '0' && c <= '9') {
        return c - '0' + 26; // Map '0' to 26, '1' to 27, ..., '9' to 35
    }
    if (c == '-') {
        return 36; // Map '-' to 36
    }
    return -1; // Invalid character
}

void Trie::insert(QString word, book* b) {
    TrieNode* cursor = root;
    int i = 0;

    // Loop through each character in the word
    while (i < word.size()) {
        qDebug() << "Start of the next iteration in while loop\n";
        // Convert QChar to char and get the index
        char c = word[i].toLower().toLatin1(); // Convert QChar to char
        int index = charToIndex(c); // Get the index for the character

        // If the index is invalid, skip the character
        if (index == -1) {
            i++;
            continue;
        }
        qDebug() << "Testing for word:" << word << " at loop " << i << "\n";
        // If the node for that character doesn't exist, create a new TrieNode
        if (!(cursor->v[index])) {
            qDebug() << "Inside an if statment\n";
            cursor->v[index] = new TrieNode();
        }
        qDebug() << "Finished Testing\n";
        // Move to the next node in the Trie
        cursor = cursor->v[index];
        qDebug() << "Finished Testing 2\n";

        i++;
    }
    qDebug() << "Got out of the loop\n";
    // Mark the end of the word and add the book to the list
    cursor->end++;
    cursor->books.push_back(b); // Add the book to the books list
    qDebug() << "Finished Adding a book to the vector\n";
    qDebug() << "inserted " << word;
}

Vector<book*> Trie::search(QString word) {
    TrieNode* cursor = root;
    int i = 0;

    while (i < word.size()) {
        // Convert QChar to char and get the index
        char c = word[i].toLower().toLatin1(); // Convert QChar to char
        int index = charToIndex(c); // Get the index for the character

        // If the index is invalid or node doesn't exist, return an empty vector
        if (index == -1 || !(cursor->v[index])) {
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
    return {}; // Return empty vector in case no match is found
}

bool Trie::startsWith(QString prefix) {
    TrieNode* cursor = root;
    int i = 0;

    while (i < prefix.size()) {
        // Convert QChar to char and get the index
        char c = prefix[i].toLower().toLatin1(); // Convert QChar to char
        int index = charToIndex(c); // Get the index for the character

        // If the index is invalid or node doesn't exist, return false
        if (index == -1 || !(cursor->v[index])) {
            return false; // Prefix doesn't exist
        }

        // Move to the next node in the Trie
        cursor = cursor->v[index];
        i++;
    }

    // If we get here, it means the prefix exists in the Trie
    return true;
}
