# Student Record Management System

A menu-driven Student Record Management System developed in C++ that allows users to add, view, and search student records. The application also saves student information to a text file so that records remain available after restarting the program.

## Features

- Add student records using roll number, name, and marks.
- View all stored student records.
- Search for a student using their roll number.
- Save student records automatically to a text file.
- Load saved records when the program starts.
- Simple, interactive command-line interface.

## Technologies Used

- **Language:** C++
- **Concepts:** Structures, vectors, functions, loops, conditional statements, file handling
- **File Storage:** Text file (`students.txt`)
- **Compiler:** GCC / G++

## Project Structure

```text
student-record-management/
├── main.cpp
├── students.txt
└── README.md
```

## How to Run

### Prerequisites

Install a C++ compiler such as GCC and ensure it is available in your terminal.

### Compile the program

```bash
g++ -std=c++17 main.cpp -o student
```

### Run the program

On Windows PowerShell:

```powershell
.\student.exe
```

## Menu Options

1. **Add Student** — Enter a student's roll number, name, and marks.
2. **View All Students** — Display all saved student records.
3. **Search Student** — Find a student using their roll number.
4. **Exit** — Close the application.

## Data Storage

Student records are stored in `students.txt`. The program saves records when a student is added and loads existing records at startup.

Keep `students.txt` in the working directory when running the application.

## Learning Outcomes

This project demonstrates fundamental C++ programming, working with collections of structured data, implementing search functionality, and performing file input/output operations.

## Future Improvements

- Prevent duplicate roll numbers.
- Update and delete student records.
- Validate marks and roll number inputs.
- Improve error handling and user input validation.

## Author

Shambhavi Seth