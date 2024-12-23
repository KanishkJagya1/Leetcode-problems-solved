# ALGO.md

## **Purpose**
The purpose of this document is to outline the ideology and mindset required to excel in competitive programming and problem-solving, specifically on platforms like LeetCode. The goal is not merely to solve a problem but to understand and develop the **algorithm** behind the solution, ensuring a deeper grasp of the underlying concepts.

---

## **Core Ideology**
> **"The most important part of solving problems on LeetCode is not just writing correct code or clearing test cases. The true essence lies in understanding how to think of the algorithm for the specific question."**

### **Why This Matters**
1. **Foundational Understanding**:
   - Writing correct code is often the final step in solving a problem, but the ability to develop the algorithm ensures you understand the foundational concepts.
   - Algorithms are transferable across domains and problems, while specific implementations are often not.

2. **Problem-Solving Mindset**:
   - Thinking algorithmically helps you break down problems into smaller, solvable components.
   - This mindset is key to tackling unseen problems during interviews or real-world scenarios.

3. **Scalability and Optimization**:
   - Algorithmic thinking emphasizes efficiency, helping you identify bottlenecks and optimize solutions.
   - Writing code without understanding the algorithm can lead to brute-force solutions that fail for large inputs.

4. **Learning vs. Memorizing**:
   - Learning how to derive an algorithm from scratch ensures long-term retention and adaptability.
   - Memorizing solutions might clear test cases but won't prepare you for variations of the problem.

---

## **How to Approach a Problem**

### **1. Understand the Problem**
- **Step 1**: Read the problem statement carefully, ensuring you understand:
  - Input and output formats.
  - Constraints and edge cases.
- **Step 2**: Identify the key challenges or operations required (e.g., searching, sorting, dynamic programming).

### **2. Analyze the Problem**
- Identify patterns in the problem:
  - Is it similar to any classic problem (e.g., "Two Sum", "Knapsack", "Binary Search Tree Traversal")?
  - Can it be broken down into smaller, more manageable problems?
- Determine the optimal time and space complexity based on constraints.

### **3. Design the Algorithm**
- Sketch out your thought process in steps. For example:
  - If it's a tree problem, think about traversal techniques (DFS, BFS).
  - If it's an optimization problem, consider dynamic programming or greedy methods.
- Write pseudocode or use flowcharts to visualize the algorithm before coding.

### **4. Implement the Algorithm**
- Translate the algorithm into code.
- Focus on **correctness first**, ensuring the algorithm works for small test cases.

### **5. Debug and Optimize**
- Use print statements or debugging tools to verify your implementation.
- Optimize the algorithm if it doesn't meet the constraints.

---

## **Signs You're Thinking Correctly**
1. **You Can Explain Your Algorithm**:
   - If you can explain the algorithm clearly to someone else or on paper, you're on the right track.
   - "If you can’t explain it simply, you don’t understand it well enough." – Einstein.

2. **You Can Handle Edge Cases**:
   - A solid algorithm accounts for edge cases (e.g., empty inputs, maximum constraints).

3. **You Can Identify Bottlenecks**:
   - If you can predict which part of your algorithm is the slowest or most memory-intensive, you have a clear understanding of its performance.

4. **Your Algorithm Scales**:
   - Thinking in terms of time and space complexity ensures your solution works for all input sizes.

---

## **Learning from Mistakes**
- **Mistake 1**: Jumping to code without designing an algorithm.
  - **Fix**: Pause, think, and write down the steps before opening the IDE.
  
- **Mistake 2**: Relying on memorized patterns.
  - **Fix**: Focus on why certain patterns work for specific problems.
  
- **Mistake 3**: Ignoring edge cases or constraints.
  - **Fix**: Always revisit the problem statement after implementing the basic solution.

---

## **Example: Two Sum Problem**
### **Problem Statement**
Find indices of two numbers in an array that add up to a specific target.

### **Thought Process**
1. **Understand the Problem**:
   - Inputs: Array `nums` and integer `target`.
   - Output: Indices of two numbers such that `nums[i] + nums[j] = target`.

2. **Analyze**:
   - Can a brute-force approach (O(n²)) work for small constraints? Yes.
   - Is there a better way? Yes, using a hash map.

3. **Design**:
   - Use a hash map to store the difference between the target and the current number.
   - Check if the current number exists in the hash map.

4. **Algorithm**:
   ```text
   Initialize an empty hash map.
   For each number in the array:
       - Check if the current number exists in the hash map.
       - If yes, return the current index and the index from the hash map.
       - Otherwise, store the difference in the hash map.
