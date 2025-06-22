
#include "HashTable.h"
#include "WordEntry.h"

// HashTable constructor
HashTable::HashTable(int s) {
    size = s;
    hashTable = new list<WordEntry>[size];
}

// Simple hash function using std::hash
int HashTable::computeHash(const string &s) const {
    unsigned int hashVal = 0;
    for (char ch : s) {
        hashVal = 37 * hashVal + ch;
    }
    return hashVal % size;
}

// Add or update a word entry
void HashTable::put(const string &s, int score) {
    int index = computeHash(s);
    for (auto &entry : hashTable[index]) {
        if (entry.getWord() == s) {
            entry.addNewAppearance(score);
            return;
        }
    }
    hashTable[index].push_back(WordEntry(s, score));
}

// Return true if word is found
bool HashTable::contains(const string &s) const {
    int index = computeHash(s);
    for (const auto &entry : hashTable[index]) {
        if (entry.getWord() == s) {
            return true;
        }
    }
    return false;
}

// Get average score or return 2.0 if not found
double HashTable::getAverage(const string &s) const {
    int index = computeHash(s);
    for (const auto &entry : hashTable[index]) {
        if (entry.getWord() == s) {
            return entry.getAverage();
        }
    }
    return 2.0;
}
