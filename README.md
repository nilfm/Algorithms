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
     * [CircularQueue <a name="user-content-circularqueue"></a>](#trie-)

## Introduction <a name="intro"></a>
This repository will store a collection of algorithms and data structures I implemented for my own learning purposes, with some information about each of them.

## Algorithms <a name="algos"></a>

### String Algorithms <a name="stringalgos"></a>

#### Knuth-Morris-Pratt algorithm <a name="kmp"></a>
* Language: C++
* Allows to efficiently check whether a string contains another.
* Time complexity: O(n), where n is the size of the largest string.
* Space complexity: O(n), where n is the size of the largest string.

#### Manacher's algorithm <a name="manacher"></a>
* Language: C++
* Allows to efficiently find the longest palindromic substring of a given string.
* Time complexity: O(n), where n is the size of the string.
* Space complexity: O(n), where n is the size of the string.

### Graph Algorithms <a name="graphalgos"></a>

#### Dijkstra's algorithm <a name="dijkstra"></a>
* Language: C++
* Allows to efficiently find the shortest path in a weighted graph without negative-weight cycles.
* Time complexity: O((V+E) log(V)), where V is the number of vertices and E is the number of edges.
* Space complexity: O(E), where E is the number of edges.

#### Kruskal's algorithm <a name="kruskal"></a>
* Language: C++
* Allows to efficiently find the minimum spanning tree of a given weighted graph.
* Time complexity: O(E log(E)), where E is the number of edges. 
* Space complexity: O(E), where E is the number of edges.

## Data Structures <a name="ds"></a>

### Trie <a name="trie"></a>
* Language: C++
* Allows for insertion, removal and lookup of strings
* Space complexity: O(sum(n_i)), where n_i are the sizes of the strings in the trie
* Time complexity of insertion: O(n), where n is the size of the string
* Time complexity of removal: O(n), where n is the size of the string
* Time complexity of checking presence of a string: O(n), where n is the size of the string
* Time complexity of finding all strings that start with a given prefix: O(sum(n_i)), where n_i are the sizes of the strings that start with that prefix

### CircularQueue <a name="circularqueue"></a>
* Language: C++
* Implemented using a std::vector<T>
* Allows for insertion, popping of oldest element and peeking of front and back elements
* Space complexity: O(max_size), where max_size is a parameter in the constructor
* Time complexity of insertion: O(1)
* Time complexity of removal: O(1)
* Time complexity of peeking front: O(1)
* Time complexity of peeking back: O(1)
