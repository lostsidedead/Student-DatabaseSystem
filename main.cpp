#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Student class to hold student details
class Student {
public:
    int id;
    string name;
    int age;
    string department;

    // Constructor to initialize student details
    Student(int id, string name, int age, string dept) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->department = dept;
    }

    // Function to display student details
    void showDetails() const {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Age: " << age
             << " | Department: " << department << endl;
    }
};

class StudentDatabase {
private:
    vector<Student> students;

public:
    // Add a new student to the database
    void addStudent(int id, string name, int age, string dept) {
        students.push_back(Student(id, name, age, dept));
        cout << "Student added successfully!" << endl;
    }

    // Display all students
    void displayAllStudents() const {
        if (students.empty()) {
            cout << "No students in the database." << endl;
        } else {
            for (const auto& student : students) {
                student.showDetails();
            }
        }
    }

    // Search for a student by ID
    void searchStudent(int id) const {
        for (const auto& student : students) {
            if (student.id == id) {
                student.showDetails();
                return;
            }
        }
        cout << "Student with ID " << id << " not found." << endl;
    }

    // Delete a student by ID
    void deleteStudent(int id) {
        for (size_t i = 0; i < students.size(); ++i) {
            if (students[i].id == id) {
                students.erase(students.begin() + i);
                cout << "Student with ID " << id << " deleted successfully!" << endl;
                return;
            }
        }
        cout << "Student with ID " << id << " not found." << endl;
    }
};

int main() {
    StudentDatabase db;
    int choice;

    while (true) {
        cout << "\nStudent Database System Menu:\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Delete Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id, age;
                string name, department;
                cout << "Enter Student ID: ";
                cin >> id;
                cout << "Enter Student Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Department: ";
                cin.ignore();
                getline(cin, department);
                db.addStudent(id, name, age, department);
                break;
            }
            case 2:
                db.displayAllStudents();
                break;
            case 3: {
                int id;
                cout << "Enter Student ID to search: ";
                cin >> id;
                db.searchStudent(id);
                break;
            }
            case 4: {
                int id;
                cout << "Enter Student ID to delete: ";
                cin >> id;
                db.deleteStudent(id);
                break;
            }
            case 5:
                cout << "Exiting the system..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
