# 📊 Grade Calculator (C++ File Handling Project)

## 📌 Project Overview
This is a **Grade Calculator program** written in C++ as part of a Programming Fundamentals assignment.

The program reads student names and their 5 test scores from an input file, calculates the average, assigns a grade based on the marks, and writes the results into an output file in a structured format.

---

## ⚙️ Features
- Reads student data from a file (`data.txt`)
- Stores marks using arrays
- Calculates average of 5 test scores
- Assigns grades using conditions:
  - A → 90–100  
  - B → 80–89  
  - C → 70–79  
  - D → 60–69  
  - F → Below 60
- Writes formatted results to `output.txt`
- Calculates class average
- Uses modular programming with functions

---

## 🧠 Concepts Used
- Arrays
- Functions (void & value-returning)
- File Handling (`ifstream`, `ofstream`)
- Loops
- Conditional statements
- Char arrays (C-style strings)

---

## 📂 Input File (data.txt)
Create a file named `data.txt` in the same folder as your `.cpp` file and add data like this:

Johnson 85 83 77 91 76
Aniston 80 90 95 93 48
Cooper 78 81 11 90 73
Gupta 92 83 30 69 87
Blair 23 45 96 38 59
Clark 60 85 45 39 67
Kennedy 77 31 52 74 83
Bronson 93 94 89 77 97
Sunny 79 85 28 93 82
Smith 85 72 49 75 63


---

## ▶️ How to Run the Project

### Step 1: Open in IDE
Open the project in:
- Code::Blocks OR
- Visual Studio Code OR
- Dev C++

---

### Step 2: Create Input File
Create a file named:

data.txt

Paste the input data shown above.

---

### Step 3: Compile the Program
Use this command (if using terminal):


g++ filename.cpp -o output


---

### Step 4: Run the Program

./output


OR just click **Run button** in your IDE.

---

### Step 5: Output File
After running, a file will be created automatically:


output.txt


This file will contain:
- Student marks
- Average
- Grade
- Class average

---

## 📤 Output Format
Student Test1 Test2 Test3 Test4 Test5 Average Grade

Johnson 85 83 77 91 76 82.4 B
...
Class Average = XX.XX


---

## 🚀 Learning Outcome
This project helped in understanding:
- Problem solving using functions
- File handling in C++
- Data processing using arrays
- Structured programming

---

## 📌 Note
- No use of STL (string, vector, etc.)
- Only basic C++ concepts used as per course requirements

## 👩‍💻 Author
Name: Aqsa Ismail
## 🛠️ Built With

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
