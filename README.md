# Algorithms

## Table of contents
  * [Introduction <a name="user-content-intro"></a>](#introduction-)
  * [Algorithms <a name="user-content-algos"></a>](#algorithms-)
     * [String Algorithms <a name="user-content-stringalgos"></a>](#string-algorithms-)
        * [Knuth-Morris-Pratt algorithm <a name="user-content-kmp"></a>](#knuth-morris-pratt-algorithm-)
        * [Manacher's algorithm <a name="user-content-manacher"></a>](#manachers-algorithm-)
     * [Graph Algorithms <a name="user-content-graphalgos"></a>](#graph-algorithms-)
        * [Dijkstra's algorithm <a name="user-content-dijkstra"></a>](#dijkstras-algorithm-)
        * [Kruskal's algorithm <a name="user-content-kruskal"></a>](#kruskals-algorithm-)
  * [Data Structures <a name="user-content-ds"></a>](#data-structures-)
     * [Trie <a name="user-content-trie"></a>](#trie-)
     * [CircularQueue <a name="user-content-circularqueue"></a>](#circularqueue-)
     * [LRUCache <a name="user-content-lru"></a>](#lru-cache-)
     * [MaxMinStack <a name="user-content-maxminstack"></a>](#max-min-stack-)
     * [FenwickTree <a name="user-content-fenwicktree"></a>](#fenwick-tree-)
     * [SegmentTree <a name="user-content-segmenttree"></a>](#segment-tree-)
     * [QuickMedian <a name="user-content-quickmedian"></a>](#quick-median-)
     * [UnionFind <a name="user-content-unionfind"></a>](#union-find-)

## Introduction <a name="intro"></a>
This repository will store a collection of algorithms and data structures I implemented for my own learning purposes, with some information about each of them.

## Algorithms <a name="algos"></a>

### String Algorithms <a name="stringalgos"></a>

#### Knuth-Morris-Pratt algorithm <a name="kmp"></a>
* Language: C++
* Allows to efficiently check whether a string contains another.
* Time complexity: O(n), where n is the size of the largest string.
* Space complexity: O(n), where n is the size of the largest string.
* Incorporated into StringAlgorithms namespace
* Implemented testing by comparison with naive algorithm

#### Manacher's algorithm <a name="manacher"></a>
* Language: C++
* Allows to efficiently find the longest palindromic substring of a given string.
* Time complexity: O(n), where n is the size of the string.
* Space complexity: O(n), where n is the size of the string.
* Incorporated into StringAlgorithms namespace
* Implemented testing by comparison with naive algorithm

### Graph Algorithms <a name="graphalgos"></a>

#### Dijkstra's algorithm <a name="dijkstra"></a>
* Language: C++
* Allows to efficiently find the shortest path in a weighted graph without negative-weight cycles.
* Time complexity: O((V+E) log(V)), where V is the number of vertices and E is the number of edges.
* Space complexity: O(E), where E is the number of edges.
* Incorporated into Graph class
* Implemented testing by comparison with Bellman-Ford's algorithm

#### Kruskal's algorithm <a name="kruskal"></a>
* Language: C++
* Allows to efficiently find the minimum spanning tree of a given weighted graph.
* Time complexity: O(E log(E)), where E is the number of edges. 
* Space complexity: O(E), where E is the number of edges.
* Incorporated into Graph class
* Implemented testing by comparison with naive algorithm

## Data Structures <a name="ds"></a>

### Trie <a name="trie"></a>
* Language: C++
* Allows for insertion, removal and lookup of strings
* Space complexity: O(sum(n_i)), where n_i are the sizes of the strings in the trie
* Time complexity of insertion: O(n), where n is the size of the string
* Time complexity of removal: O(n), where n is the size of the string
* Time complexity of checking presence of a string: O(n), where n is the size of the string
* Time complexity of finding all strings that start with a given prefix: O(sum(n_i)), where n_i are the sizes of the strings that start with that prefix
* Implemented testing by comparison with naive algorithm

### CircularQueue <a name="circularqueue"></a>
* Language: C++
* Implemented using a std::vector<T>
* Allows for insertion, popping of oldest element and peeking of front and back elements
* Space complexity: O(max_size), where max_size is a parameter in the constructor
* Time complexity of insertion: O(1)
* Time complexity of removal: O(1)
* Time complexity of peeking front: O(1)
* Time complexity of peeking back: O(1)
* Implemented testing by comparison with naive algorithm

### LRU Cache <a name="lrucache"></a>
* Language: C++
* Implemented using a custom Node struct, a custom LinkedList class and an std::unordered_map<K, Node<K, V>*>
* Allows for efficient insertion and retrieval of key-value pairs while maintaining an LRU policy for evicting keys.
* Space complexity: O(n), where n is the number of key-value pairs in the cache (this depends on the implementation of std::unordered_map)
* Time complexity of insertion: O(1)
* Time complexity of retrieval: O(1)
* Implemented testing by comparison with naive algorithm

### Max Min Stack <a name="maxminstack"></a>
* Language: C++
* Implemented using std::stack<T>
* Allows to efficiently retrieve the top-most element in the stack, as well as the minimum and maximum.
* Space complexity: O(n), where n is the number of elements in the stack.
* Time complexity of insertion: O(1)
* Time complexity of removal: O(1)
* Time complexity of retrieval of top element: O(1)
* Time complexity of retrieval of min element: O(1)
* Time complexity of retrieval of max element: O(1)
* Implemented testing by comparison with naive algorithm

### Fenwick Tree <a name="fenwicktree"></a>
* Language: C++
* Implemented using std::vector<int>
* Allows to efficiently query for range sum and update elements.
* Space complexity: O(n), where n is the number of elements in the tree.
* Time complexity of construction from vector: O(n*log(n)) (TODO: can be improved to O(n))
* Time complexity of range sum query: O(log(n)) 
* Time complexity of updating element: O(log(n))
* Implemented testing by comparison with naive algorithm

### Segment Tree <a name="segmenttree"></a>
* Language: C++
* Implemented using std::vector<T>
* Allows to efficiently query for an associative operation applied to a range, and update elements.
* Space complexity: O(n), where n is the number of elements in the tree.
* Time complexity of construction from vector: O(n)
* Time complexity of range query: O(log(n)) 
* Time complexity of updating element: O(log(n))
* Implemented testing by comparison with naive algorithm

### Quick Median <a name="quickmedian"></a>
* Language: C++
* Implemented using std::multiset<T>
* Allows to efficiently query for the median of its elements, as well as insert or erase elements from it. 
* Space complexity: O(n), where n is the number of elements in the structure
* Time complexity of construction from vector: O(n*log(n))
* Time complexity of median query: O(1)
* Time complexity of inserting element: O(log(n))
* Time complexity of erasing element: O(log(n))
* Implemented testing by comparison with naive algorithm

### Union Find <a name="unionfind"></a>
* Language: C++
* Implemented using std::vector<int>
* Allows to efficiently join elements' equivalence classes, and query if two elements are in the same class. 
* Space complexity: O(n), where n is the number of elements in the structure
* Time complexity of connected query: O(alpha(n)), where alpha is the inverse Ackermann function, which is less than 5 for all intents and purposes
* Time complexity of joining two classes: O(alpha(n)), where alpha is again the inverse Ackermann function
* Used in the implementation of Kruskal's algorithm
