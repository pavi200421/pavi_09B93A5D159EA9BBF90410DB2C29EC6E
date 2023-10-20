#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

bool compareStudents(const Student& student1, const Student& student2) {
    // Compare students based on CGPA in descending order
    return student1.cgpa > student2.cgpa;
}

void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareStudents);
}

int main() {
    // Create a list of students
    std::vector<Student> students = {
        {"Alice", "S001", 3.8},
        {"Bob", "S002", 3.5},
        {"Charlie", "S003", 3.9},
        {"David", "S004", 3.7}
    };

    // Sort the students based on CGPA
    sort_students(students);

    // Display the sorted list
    for (const Student& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}
