<h1 align="center">📊 Grade Calculator</h1>
<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Course-Programming%20Fundamentals-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio-purple?style=for-the-badge&logo=visualstudio&logoColor=white"/>
</p>

---

## 📌 Overview

A C++ console program that reads student names and 5 test scores
from an input file, calculates the average, assigns a grade, and
writes the formatted results to an output file. Also computes
the overall class average.

---

## ⚙️ Features

| Feature | Description |
|---------|-------------|
| 📂 File Input | Reads student data from `data.txt` |
| 🧮 Average | Calculates average of 5 test scores per student |
| 🎯 Grading | Assigns A/B/C/D/F based on average |
| 📤 File Output | Writes formatted results to `output.txt` |
| 📊 Class Average | Computes overall class average at the end |
| 🔧 Modular Code | Uses separate functions for each task |

---

## 🧠 Concepts Used

![Arrays](https://img.shields.io/badge/Arrays-blueviolet?style=for-the-badge)
![Functions](https://img.shields.io/badge/Functions-orange?style=for-the-badge)
![File Handling](https://img.shields.io/badge/File%20Handling-red?style=for-the-badge)
![Char Arrays](https://img.shields.io/badge/Char%20Arrays-success?style=for-the-badge)
![Loops](https://img.shields.io/badge/Loops-blue?style=for-the-badge)
![Conditionals](https://img.shields.io/badge/Conditionals-yellow?style=for-the-badge)

---

## 🔧 Functions Used

| Function | Type | Description |
|----------|------|-------------|
| `initialize()` | void | Initializes marks array to 0 |
| `read_file()` | void | Reads marks from `data.txt` into array |
| `calculateAverage()` | void | Calculates sum of 5 marks |
| `calculateGrade()` | char | Returns grade based on average |
| `write_file()` | void | Writes results to `output.txt` |

---

## 🎯 Grading Scale

| Grade | Marks Range |
|-------|------------|
| A | 90 – 100 |
| B | 80 – 89 |
| C | 70 – 79 |
| D | 60 – 69 |
| F | Below 60 |

---

## 📂 Input File (data.txt)

Create a file named `data.txt` in the **same folder** as your `.cpp` file and paste this data:

```
Johnson 85 83 77 91 76
Aniston 80 90 95 93 48
Cooper  78 81 11 90 73
Gupta   92 83 30 69 87
Blair   23 45 96 38 59
Clark   60 85 45 39 67
Kennedy 77 31 52 74 83
Bronson 93 94 89 77 97
Sunny   79 85 28 93 82
Smith   85 72 49 75 63
```

---

## 📤 Output Format (output.txt)

```
================================================
Student  Test1  Test2  Test3  Test4  Test5  Average  Grade
================================================
Johnson  85     83     77     91     76     82.4     B
Aniston  80     90     95     93     48     81.2     B
Cooper   78     81     11     90     73     66.6     D
...
================================================
Class Average = 75.3
================================================
```

---

## ▶️ How to Run

### 🖥️ Visual Studio (Recommended)
1. Open **Visual Studio**
2. Click **"Create a new project"**
3. Select **"Empty Project"** → C++
4. Add your `main.cpp` file to the project
5. Right click on project → **"Add"** → **"Existing Item"** → select `main.cpp`
6. Create `data.txt` in this path:
```
project folder → Debug folder → paste data.txt here
```
7. Press **Ctrl + F5** to Run without debugging
8. Check **Debug folder** for `output.txt`

> ⚠️ **Important:** `data.txt` must be in the same folder where your `.exe` file is generated (usually Debug folder)

---

### 💻 VS Code
1. Open folder in **VS Code**
2. Create `data.txt` in same folder as `main.cpp`
3. Open terminal → **Ctrl + `**
4. Type:
```bash
g++ main.cpp -o output
./output
```
5. `output.txt` will appear in same folder

---

### 🖱️ Dev C++
1. Open `main.cpp` in **Dev C++**
2. Create `data.txt` in same folder as `.cpp` file
3. Press **F11** to Compile & Run
4. `output.txt` will appear in same folder

---

## 📁 Project Files

```
grade-calculator-cpp/
├── main.cpp        → main source code
├── data.txt        → input file (student data)
├── output.txt      → generated output file
└── README.md       → project documentation
```

---

## ⚠️ Important Notes

- No STL used (no `string`, `vector`, etc.)
- Only basic C++ concepts as per course requirement
- `data.txt` must exist before running the program
- `output.txt` is automatically created by the program

---

## 👩‍💻 Author

**Aqsa Ismail**
| [GitHub](https://github.com/aqsaismail04)
| [LinkedIn](https://www.linkedin.com/in/aqsaismail04/)
