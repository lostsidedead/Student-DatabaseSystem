# Student Database System - C++ Project

This project is a **Student Database System** implemented in C++. It allows users to manage student records in a database, including adding new students, displaying all students, searching for a student by ID, and deleting a student by ID.

## Features

1. **Add Student**: Users can add a new student to the database by providing the student's ID, name, age, and department.
2. **Display All Students**: Displays a list of all students currently in the database, including their ID, name, age, and department.
3. **Search Student by ID**: Users can search for a student by their unique ID and view the student's details.
4. **Delete Student by ID**: Users can delete a student record by providing the student's ID. Once deleted, the student will no longer be listed in the database.
5. **Exit**: Exits the program.

## How to Use

1. Clone or download the project files.
2. Open a terminal and navigate to the project directory.
3. Compile the C++ code using the following command:

    ```
    g++ student_database.cpp -o studentDatabase
    ```

4. Run the executable:

    ```
    ./studentDatabase
    ```

5. Follow the menu instructions to use the system.

## Menu Options

- **1. Add Student**: Adds a new student by entering the student's details.
- **2. Display All Students**: Displays all students currently stored in the database.
- **3. Search Student by ID**: Allows users to search for a student by their unique ID.
- **4. Delete Student by ID**: Deletes a student from the database using their ID.
- **5. Exit**: Exits the program.

## Example

1. The user selects **"Add Student"** to enter a new student's information, including their ID, name, age, and department.
2. The user can then select **"Display All Students"** to view a list of all students currently in the system.
3. To find a specific student, the user selects **"Search Student by ID"** and provides the student ID.
4. If needed, the user can delete a student by selecting **"Delete Student by ID"** and entering the student ID.
5. Finally, the user can choose **"Exit"** to close the system.

## Future Enhancements

- Add the ability to update student records.
- Store student data in a file for persistence across sessions.
- Implement validation for student data (e.g., checking for duplicate IDs).
