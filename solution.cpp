// ASSIGNMENT #03 (PART 1)
// Name: M.Abdullah Imran | Roll# SU92-BSSEM-F25-041

#include <iostream>
#include <iomanip>
using namespace std;

// PROGRAM #01
double calculateAverage(int testScores[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += testScores[i];
    }
    return (double)totalSum / size;
}

int main() {
    int numberOfStudents;
    cout << "Enter Number of Students" << endl;
    cin >> numberOfStudents;
    
    int* studentScores = new int[numberOfStudents];
    cout << numberOfStudents << " Enter Marks of each student" << endl;
    for (int i = 0; i < numberOfStudents; i++) {
        cin >> studentScores[i];
    }
    
    double classAverage = calculateAverage(studentScores, numberOfStudents);
    cout << fixed << setprecision(2);
    cout << "Average score of a class is " << classAverage << endl;
    
    delete[] studentScores;
    return 0;
}
