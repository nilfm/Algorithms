#include "Trie.hh"
#include <iostream>

const char END = '$';

TrieNode::TrieNode() {}    
TrieNode::TrieNode(const TrieNode& other) {
    copy(children, other.children);
}
TrieNode& TrieNode::operator=(const TrieNode& other) {
    if (this == &other) return *this;
    copy(children, other.children);
    return *this;
}

void TrieNode::copy(std::map<char, std::shared_ptr<TrieNode>>& me, const std::map<char, std::shared_ptr<TrieNode>>& other) {
    for (auto p : other) {
        me[p.first] = std::make_shared<TrieNode>();
        copy(me[p.first]->children, (p.second)->children);
    }
}


Trie::Trie() {
    sz = 0;
    head = std::make_shared<TrieNode>();    
}
Trie::Trie(const std::vector<std::string>& v) {
    sz = 0;
    head = std::make_shared<TrieNode>();
    for (std::string s : v) insert(s);
}
Trie::Trie(const Trie& other) {
    sz = other.sz;
    head = std::make_shared<TrieNode>();
    *head = *(other.head);
}
Trie::Trie(Trie&& other) {
    sz = other.sz;
    head = other.head;
    other.sz = 0;
    other.head = nullptr;
}
Trie& Trie::operator=(const Trie& other) {
    if (this == &other) return *this;
    sz = other.sz;
    head = std::make_shared<TrieNode>();
    *head = *(other.head);    
    return *this;
}
Trie& Trie::operator=(Trie&& other) {
    if (this == &other) return *this;
    head = other.head;
    sz = other.sz;
    return *this;
}

Trie::~Trie() {}

void Trie::words(std::string start, std::vector<std::string>& v, std::shared_ptr<TrieNode> head, std::string curr) {
    if (head == nullptr) return;
    for (auto p : head->children) {
        if (p.first == END) {
            v.push_back(start+curr);
        }
        else {
            words(start, v, p.second, curr+p.first);
        }
    }
}

// Returns true if s wasn"t there and was successfully inserted
bool Trie::insert(std::string& s) {
    s.push_back(END);
    bool res = false;
    std::shared_ptr<TrieNode> curr = head;
    for (int i = 0; i < (int)s.size(); i++) {
        if (not (curr->children).count(s[i])) {
            res = true;
            (curr->children)[s[i]] = std::make_shared<TrieNode>();
        }
        curr = (curr->children)[s[i]];
    }
    if (res) sz++;
    return res;
}

// Returns true if s was there and was successfully removed
bool Trie::remove(std::string& s) {
    s.push_back(END);
    std::stack<std::shared_ptr<TrieNode>> to_remove;
    std::shared_ptr<TrieNode> curr = head;
    for (int i = 0; i < (int)s.size(); i++) {
        if (not (curr->children).count(s[i])) {
            return false;
        }
        to_remove.push(curr);
        if (s[i] != END) curr = (curr->children)[s[i]];
    }
    //Remove the end marker
    (curr->children).erase(END);
    
    int i = s.size()-2;
    while (i >= 0 and (curr->children).size() == 0) {
        curr = to_remove.top();
        to_remove.pop();
        (curr->children).erase(s[i]);
        i--;
    }
    sz--;
    return true;
}

// Returns true if s is in the trie
bool Trie::contains(std::string& s) {
    s.push_back(END);
    std::shared_ptr<TrieNode> curr = head;
    for (int i = 0; i < (int)s.size(); i++) {
        if (not (curr->children).count(s[i])) {
            return false;
        }
        curr = (curr->children)[s[i]];
    }
    return true;
}

// Returns the number of words stored
int Trie::size() {
    return sz;
}

// Returns all words contained in the trie starting with start, in alphabetical order
std::vector<std::string> Trie::words(std::string start = "") {
    std::vector<std::string> res;
    std::shared_ptr<TrieNode> curr = head;
    for (int i = 0; i < (int)start.size(); i++) {
        if (not (curr->children).count(start[i])) {
            return std::vector<std::string>();
        }
        curr = (curr->children)[start[i]];
    }
    words(start, res, curr, "");
    return res;
}

int main() {
    std::vector<std::string> v = {"aaa", "aaaa", "aa", "aba", "abc"};
    Trie T(v);
    
    std::vector<std::string> rem = {"aaa", "bbb", "aba"};
    
    std::cout << "Size: " << T.size() << std::endl;
    
    std::cout << std::endl << "All words" << std::endl;
    std::vector<std::string> words = T.words();
    for (auto word : words) {
        std::cout << "  Found the word " << word << std::endl;
    }
    
    std::cout << std::endl << "Words starting with a" << std::endl;
    words = T.words("a");
    for (auto word : words) {
        std::cout << "  Found the word " << word << std::endl;
    }
    
    std::cout << std::endl << "Words starting with ab" << std::endl;
    words = T.words("ab");
    for (auto word : words) {
        std::cout << "  Found the word " << word << std::endl;
    }
    std::cout << std::endl;
    
    for (auto word : rem) {
        std::cout << "Trying to remove " << word << std::endl;
        if (T.remove(word)) {
            std::cout << "  Successfully removed" << std::endl;
        }
        else {
            std::cout << "  Word not found" << std::endl;
        }
    }
}
