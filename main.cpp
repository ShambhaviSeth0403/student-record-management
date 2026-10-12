#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

void saveStudents(const vector<Student>& students) {
    ofstream file("students.txt");

    if (!file.is_open()) {
        cout << "Error: Could not save student records!\n";
        return;
    }
    for (const Student& s : students) {
        file << s.rollNumber << "\n";
        file << s.name << "\n";
        file << s.marks << "\n";
    }

    file.close();
}

void loadStudents(vector<Student>& students) {
    ifstream file("students.txt");

    if (!file.is_open()) {
        return;
    }

    Student s;

    while (file >> s.rollNumber) {
        file.ignore();
        getline(file, s.name);

        if (!(file >> s.marks)) {
            break;
        }

        students.push_back(s);
        file.ignore();
    }

    file.close();
}


int main() {
    vector<Student> students;
    loadStudents(students);
    int choice;

    do {
        cout << "\n===== Student Record Management =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;

            cout << "Enter roll number: ";
            cin >> s.rollNumber;
            cin.ignore();

            cout << "Enter student name: ";
            getline(cin, s.name);

            cout << "Enter marks: ";
            cin >> s.marks;

            students.push_back(s);
            saveStudents(students);
            cout << "Student added successfully!\n";
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No student records found.\n";
            }
            else {
                for (const Student& s : students) {
                    cout << "\nRoll Number: " << s.rollNumber;
                    cout << "\nName: " << s.name;
                    cout << "\nMarks: " << s.marks << "\n";
                }
            }
        }
            else if (choice == 3) {
             int roll;
    bool found = false;

    cout << "Enter roll number to search: ";
    cin >> roll;

    for (const Student& s : students) {
        if (s.rollNumber == roll) {
            cout << "\nStudent Found!\n";
            cout << "Roll Number: " << s.rollNumber << "\n";
            cout << "Name: " << s.name << "\n";
            cout << "Marks: " << s.marks << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}
else if (choice != 4) {
    cout << "Invalid choice. Try again.\n";
}

}while (choice != 4);

    cout << "Program closed.\n";
    return 0;
}