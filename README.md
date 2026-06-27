# Student Record Manager (C++)

A simple console-based **Student Record Management System** built in C++ to practice **Object-Oriented Programming (OOP)** fundamentals.

## Features
- Add student records (name, roll number, marks)
- Display all stored students
- Calculate average marks
- Menu-driven console interface

## OOP Concepts Used
- **Classes & Objects** — `Student` class models real-world entities
- **Encapsulation** — private member variables accessed only through public functions (`setData`, `getMarks`)
- **Collections of Objects** — using `vector<Student>` to manage multiple records dynamically

## Tech Stack
- C++ (Standard Library: `<iostream>`, `<vector>`, `<string>`)
- Compiled with g++ / MinGW
- Developed in VS Code

## How to Run

1. Clone the repository
```bash
   git clone https://github.com/Hcommit/student-record-manager.git
   cd student-record-manager
```
2. Compile
```bash
   g++ main.cpp -o student_manager
```
3. Run
```bash
   ./student_manager
```

## Sample Output