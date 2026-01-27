 📚 Data Structures & Algorithms

> A comprehensive collection of Data Structures and Algorithms implementations in C++ and Python

 📖 Overview

This repository contains well-documented implementations of fundamental and advanced data structures and algorithms. Each implementation is designed for learning, interview preparation, and quick reference, covering topics from basic sorting algorithms to complex graph traversals and tree operations.

 🎯 Purpose

This repository serves as:
- 📚 Learning Resource: Understanding DSA concepts through practical implementations
- 💼 Interview Preparation: Common algorithms asked in technical interviews
- 🔍 Quick Reference: Clean, readable code for algorithm implementations
- 🎯 Practice Platform: Solutions to various algorithmic problems

 📁 Repository Structure

 🌳 Trees
- AVL_tree.cpp: Self-balancing Binary Search Tree implementation

 🔍 Searching Algorithms
- Binarysearch.cpp: Binary search implementation
- Breadth_first_search_in_reverse.cpp: BFS with reverse traversal
- Find_number_of_occurence_of_a.cpp: Count occurrences in array

 🔄 Sorting Algorithms
- Mergesort.cpp: Merge sort implementation (Divide & Conquer)
- Sorting_a_queue_using_stack.cpp: Queue sorting using stack
- topological_sort.cpp: Topological sorting for DAGs
- selectionsort.cpp: Selection sort implementation

 🕸️ Graph Algorithms
- BFS and DFS undirected graphvisual.cpp: Breadth-First and Depth-First Search
- Shortest_path_algorithm_based_o.cpp: Shortest path algorithms

 🔗 Linked Lists
- Merging_two_linked_list_in_a_so.cpp: Merge sorted linked lists

 📦 Array & String Problems
- Anagram_problems.py: Anagram detection algorithms
- subarray_sum.py: Subarray sum problems
- two_sum.py: Two sum problem solutions
- sliding_window_longest_substrin.cpp: Sliding window technique

 📢 String Algorithms
- soundex.py: Soundex phonetic algorithm implementation

 🧪 Testing & Analysis
- Chi_square_test.py: Statistical chi-square test
- t_test.py: Student's t-test implementation

 💻 Technologies Used

| Language | Percentage | Use Cases |
|----------|------------|------------|
| C++ | ~92% | Performance-critical algorithms, tree/graph structures |
| Python | ~8% | Array problems, statistical tests, quick prototyping |

 🚀 Getting Started

 Prerequisites

For C++ files:
```bash
G++ compiler (GCC 7.0 or higher)
C++11 or later
```

For Python files:
```bash
Python 3.x
```

 Compilation & Execution

C++ Programs:
```bash
 Compile
g++ -std=c++11 filename.cpp -o output

 Run
./output
```

Example:
```bash
g++ -std=c++11 Binarysearch.cpp -o binarysearch
./binarysearch
```

Python Programs:
```bash
python filename.py
```

Example:
```bash
python two_sum.py
```

 📈 Algorithm Categories

 1. Tree Data Structures
- 🌳 AVL Trees (Self-balancing BST)
- Binary Search Trees
- Tree Traversals

 2. Graph Algorithms
- 🕸️ BFS (Breadth-First Search)
- 🕸️ DFS (Depth-First Search)
- Shortest Path Algorithms
- Topological Sorting

 3. Sorting Algorithms
- 🔄 Merge Sort (O(n log n))
- Selection Sort (O(n²))
- Topological Sort

 4. Searching Algorithms
- 🔍 Binary Search (O(log n))
- Linear Search variants
- Occurrence counting

 5. Array & String Techniques
- 📦 Sliding Window
- Two Pointer technique
- Subarray problems
- Anagram detection

 6. Advanced Topics
- 🧠 In-place array operations
- Stack and Queue operations
- Linked list manipulations
- Statistical algorithms

 📊 Complexity Analysis

| Algorithm | Time Complexity | Space Complexity |
|-----------|----------------|------------------|
| Binary Search | O(log n) | O(1) |
| Merge Sort | O(n log n) | O(n) |
| Selection Sort | O(n²) | O(1) |
| BFS | O(V + E) | O(V) |
| DFS | O(V + E) | O(V) |
| AVL Operations | O(log n) | O(n) |
| Two Sum | O(n) | O(n) |

where V = vertices, E = edges, n = array size

 🎯 Key Implementations

 Highlight: AVL Tree
```cpp
// Self-balancing binary search tree
// Automatic rebalancing after insertions/deletions
// Guaranteed O(log n) operations
```

 Highlight: Graph Traversals
```cpp
// BFS and DFS implementations for undirected graphs
// Visual representation support
// Path finding capabilities
```

 Highlight: Sliding Window
```cpp
// Efficient substring/subarray problems
// Linear time complexity O(n)
// Optimal for finding longest/shortest subarrays
```

 📚 Learning Path

Recommended order for beginners:

1. Arrays & Searching
   - Binary Search
   - Two Sum
   - Subarray problems

2. Sorting
   - Selection Sort
   - Merge Sort

3. Linked Lists
   - Merging sorted lists

4. Trees
   - AVL Trees
   - Tree traversals

5. Graphs
   - BFS/DFS
   - Shortest paths
   - Topological sort

6. Advanced Techniques
   - Sliding window
   - In-place operations

 🛠️ Problem-Solving Patterns

 Two Pointer Technique
- Two Sum problems
- Array reversal
- Sliding window problems

 Divide and Conquer
- Merge Sort
- Binary Search

 Dynamic Programming Foundations
- Subarray sum problems

 Graph Traversal Patterns
- BFS for shortest paths
- DFS for connectivity
- Topological sort for dependencies

 📄 File Naming Convention

- Descriptive names: Files are named based on the algorithm/problem
- Extensions:
  - `.cpp` for C++ implementations
  - `.py` for Python implementations
- Snake_case: Used for multi-word filenames

 💡 Interview Preparation

This repository covers common interview topics:

✅ Array Manipulation: In-place operations, two pointers  
✅ Linked Lists: Merging, reversing, cycle detection concepts  
✅ Trees: BST operations, AVL trees, traversals  
✅ Graphs: BFS, DFS, shortest paths  
✅ Sorting: Multiple algorithms with different complexities  
✅ Searching: Binary search and variants  
✅ String Algorithms: Pattern matching, anagrams  
✅ Sliding Window: Substring/subarray problems  

 🔮 Future Additions

Planned implementations:

- 🔴 Red-Black Trees
- 🌲 B-Trees and B+ Trees
- 🕸️ Dijkstra's Algorithm
- 🕸️ Bellman-Ford Algorithm
- 🕸️ Floyd-Warshall Algorithm
- 🧠 Dynamic Programming problems
- 🔄 Quick Sort variants
- 🔄 Heap Sort
- 🕸️ Minimum Spanning Tree (Kruskal's, Prim's)
- 🦄 Trie data structure
- 📊 Segment Trees
- 📊 Fenwick Trees (Binary Indexed Trees)

 🤝 Contributing

Contributions are welcome! If you'd like to add new algorithms or improve existing ones:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/NewAlgorithm`)
3. Add your implementation with comments
4. Commit your changes (`git commit -m 'Add NewAlgorithm'`)
5. Push to the branch (`git push origin feature/NewAlgorithm`)
6. Open a Pull Request

 Contribution Guidelines
- 📝 Include time and space complexity analysis
- 📖 Add comments explaining the logic
- ✅ Test your code with multiple test cases
- 📊 Follow consistent naming conventions

 📚 Resources for Learning

 Books
- "Introduction to Algorithms" by CLRS
- "Algorithm Design Manual" by Steven Skiena
- "Cracking the Coding Interview" by Gayle Laakmann McDowell

 Online Platforms
- LeetCode
- HackerRank
- Codeforces
- GeeksforGeeks

 📝 License

This project is open source and available under the [MIT License](LICENSE).

 👤 Author

Prannessh2006
- GitHub: [@Prannessh2006](https://github.com/Prannessh2006)
- Repository: [DSA](https://github.com/Prannessh2006/DSA)

 ⭐ Show Your Support

Give a ⭐ if this project helped you learn DSA concepts or prepare for interviews!

 📞 Contact

For questions, suggestions, or discussions:
- Open an issue on GitHub
- Explore the code and learn from implementations
- Share your improvements through pull requests

---

Happy Coding! 🚀

"The only way to learn a new programming language is by writing programs in it." - Dennis Ritchie

---

## 💼 About Me

I'm a passionate developer and student leader exploring the intersection of **Data Science**, **Machine Learning**, and **Full-Stack Web Development**. 

This repository reflects my commitment to:
- **Mastering core CS fundamentals** - A strong foundation in DSA and algorithms is essential for scalable software engineering
- **Technical excellence** - Writing clean, well-documented, and efficient code
- **Knowledge sharing** - Helping other students and aspiring developers learn through practical implementations

### 🔗 Connect with Me

- **LinkedIn**: [Prannessh2006](https://linkedin.com/in/prannesshkva) - Let's connect and discuss tech, AI, and entrepreneurship
- **GitHub**: [@Prannessh2006](https://github.com/Prannessh2006) - Explore my other projects in ML, data science, and full-stack development
- **Email**: praneshkva39@gmail.com - Feel free to reach out for collaborations

### 📌 My Other Projects

- **Data Science & Analytics**: Interactive dashboards and customer segmentation analysis
- **AI & ML Initiatives**: Exploring RAG applications and LLM fine-tuning
- **Full-Stack Development**: Building scalable web applications with modern tech stacks

---

**"Excellence is not a destination; it's a continuous journey of learning and growth."**
