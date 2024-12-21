# std::vector<bool> Gotcha!
This repository demonstrates a common, yet subtle, error related to the specialization of `std::vector<bool>` in C++.  The standard library optimizes `std::vector<bool>` for memory efficiency, but this optimization sacrifices some standard vector behavior, leading to potential bugs.

The `bug.cpp` file shows code that highlights the unexpected behavior.  The `bugSolution.cpp` file demonstrates how to avoid these problems.

**Key Issues:**
* **Non-contiguous storage:**  `std::vector<bool>` doesn't store booleans contiguously in memory. This breaks assumptions made by algorithms that iterate over and modify vectors. 
* **Non-standard interface:**  Standard vector operations might not work as expected (e.g., accessing elements via pointers). 
* **Memory usage:** While memory-efficient, the optimized storage might negate any performance advantages for small vectors because of the added complexity.

**Recommendation:** Unless memory usage is a critical concern, consider alternatives such as `std::vector<char>` (with a mapping to represent boolean values) or `std::bitset` for better performance and predictability.