#include <iostream>
#include <vector>
using namespace std;

void Grades() {
    vector<vector<int>> studentGrades;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    studentGrades.resize(numStudents);

    for (int i = 0; i < numStudents; ++i) {
        int numSubjects;
        cout << "Enter the number of subjects for student " << i + 1 << ": ";
        cin >> numSubjects;
        studentGrades[i].resize(numSubjects);

        cout << "Enter grades for student " << i + 1 << " : ";
        for (int j = 0; j < numSubjects; ++j) {
            cin >> studentGrades[i][j];
        }
    }

    cout << "\nGrades for each student:\n";
    int maxTotalMarks = 0;
    int maxIndex = -1;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << " grades:";
        int totalMarks = 0;
        for (int j = 0; j < studentGrades[i].size(); ++j) {
            totalMarks += studentGrades[i][j];
            cout << " " << studentGrades[i][j];
        }
        cout << endl;
        cout << "Total marks for student " << i + 1 << ": " << totalMarks << endl;

     
        if (totalMarks > maxTotalMarks) {
            maxTotalMarks = totalMarks;
            maxIndex = i;
        }
    }

    
    if (maxIndex != -1) {
        cout << "Student " << maxIndex + 1 << " has the greatest total marks: " << maxTotalMarks << endl;
    }
    else {
        cout << "No student data found." << endl;
    }
}

int main() {
    Grades();
    return 0;
}
