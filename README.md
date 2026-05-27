# 💻 Operating System Phase 1 Simulator

## 📌 Project Overview

This project is a simple **Operating System Phase-1 Simulator** developed in **C++**. It demonstrates the basic working of an operating system by simulating:

* Memory Management
* Instruction Execution
* Register Operations
* Input/Output Instructions
* Program Loading and Execution

The project reads instructions from an input file, loads them into memory, executes them one by one, and stores the output in an output file.

---

# 🛠️ Technologies Used

* **Language:** C++
* **Concepts:** Operating System Basics, Memory Simulation, Instruction Cycle
* **Compiler:** g++ / MinGW
* **IDE:** VS Code

---

# 📂 Project Structure

```bash
SAMRUDDHI'S-OS-PHASE01/
│
├── phase1.cpp              # Main source code
├── input.txt               # Input instructions and data
├── output.txt              # Generated output
├── OS-PHASE1.pdf           # Project documentation/report
├── phase1.exe              # Compiled executable file
│
└── .vscode/
    ├── c_cpp_properties.json
    ├── launch.json
    └── settings.json
```

---

# ✨ Features

* Simulates a simple operating system environment
* Supports instruction execution cycle
* Implements memory handling using arrays
* Performs file input and output operations
* Supports register load/store operations
* Executes user-defined instructions

---

# 📖 Instructions Supported

| Instruction | Description               |
| ----------- | ------------------------- |
| GD          | Get Data from input file  |
| PD          | Print Data to output file |
| LR          | Load Register             |
| SR          | Store Register            |
| H           | Halt execution            |

---

# 🧠 Memory Organization

The simulator uses:

* `M[100][4]` → Main memory
* `IR[4]` → Instruction Register
* `R[4]` → General Register
* `IC` → Instruction Counter

---

# ⚙️ Working of the Program

## 1. Initialization

The memory is initialized with blank spaces.

## 2. Loading Phase

The program instructions are loaded into memory from `input.txt`.

## 3. Execution Phase

The simulator executes instructions one by one.

## 4. Output Generation

The final output is written into `output.txt`.

---

# 📥 Sample Input

```txt
$AMJ
GD10
PD10
H
$DTA
HELLO SAMRUDDHI
$END
```

---

# 📤 Sample Output

```txt
HELLO SAMRUDDHI
```

---

# ▶️ How to Run the Project

## Step 1: Compile the Code

```bash
g++ phase1.cpp -o phase1
```

## Step 2: Run the Program

```bash
./phase1
```

For Windows:

```bash
phase1.exe
```

---

# 🎯 Concepts Demonstrated

This project helps in understanding:

* Basic Operating System Design
* Job Loading
* Memory Simulation
* Instruction Processing
* File Handling in C++
* Register Operations
* Execution Cycle

---

# 🖥️ Output Example from Project

```txt
HELLO SAMRUDDHI
OPER
```

---

# 🚀 Future Improvements

Possible enhancements for future phases:

* Interrupt Handling
* Paging Mechanism
* Error Handling
* Multiprogramming
* Job Scheduling Algorithms
* CPU Scheduling
* Memory Protection

---

# 📚 Learning Outcome

By completing this project, the following concepts were understood:

* How operating systems execute instructions
* How memory is managed internally
* Role of registers and instruction counters
* How data is transferred between memory and registers
* Basics of process execution

---

# 👩‍💻 Author

**Samruddhi Bate**
Computer Engineering Student

---

# ☁️ GitHub Upload Steps

## Create Repository

1. Open GitHub
2. Click on **New Repository**
3. Enter repository name
4. Click **Create Repository**

---

## Upload Using Git Commands

```bash
git init
git add .
git commit -m "Initial Commit"
git branch -M main
git remote add origin YOUR_GITHUB_REPOSITORY_LINK
git push -u origin main
```

---

# 🏷️ Repository Name Suggestions

* OS-Phase1-Simulator
* Operating-System-Phase1
* OS-Memory-Simulator
* Phase1-OS-Project

---

# 📜 License

This project is created for educational and academic purposes.
