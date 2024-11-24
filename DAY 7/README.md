## **GDG 7 Days of Code - Day 7 Challenge**

### **Problem Title**: **Set Matrix Zeroes**

---

### **Problem Statement**  

- You are given a 2d matrix \( M \) of size \( N \). Your task is to modify the matrix in such a way that if an element in the matrix is \( 0 \), its entire row and column should be set to \( 0 \). 
- (As today is the last day we will level up a bit...👍)
---

### **Input Format**  

- The first line contains two integers \( N \) (number of rows) and \( M \) (number of columns).  
- The next \( N \) lines each contain \( M \) integers, representing the elements of the matrix.  

---

### **Output Format**  
- Output the modified matrix after setting the appropriate rows and columns to \( 0 \).  

---

### **Test Case 1**

**Input**:  
```
3 3
1 2 3
4 0 6
7 8 9
```

**Output**:  
```
1 0 3
0 0 0
7 0 9
```
### **Explanation**  

   - The second row contains \( 0 \), so its entire row and column are set to \( 0 \).
---
#### **Test Case 2**

**Input**:  
```
4 4
0 2 3 4
5 6 7 8
9 10 0 12
13 14 15 16
```

**Output**:  
```
0 0 0 0
0 6 0 8
0 0 0 0
0 14 0 16
```
### **Explanation** 

   - The first element is \( 0 \), so the entire first row and column are set to \( 0 \).  
   - The third row contains a \( 0 \), so its entire row and column are also set to \( 0 \).  

---

### **Instructions**  

1. Traverse the matrix to identify all rows and columns that should be set to \( 0 \).  
2. Modify the matrix in-place based on the identified rows and columns.  
3. Print the resulting matrix.

**Happy Coding!!** 🚀
