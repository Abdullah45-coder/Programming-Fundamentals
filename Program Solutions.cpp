// ==========================================
// M. Abdullah Imran | Roll# SU92-BSSEM-F25-041
// All Extracted C++ Codes Consolidated
// ==========================================

// --- ASSIGNMENT 3 PART 1 - PROGRAM 1 ---
#include<iostream>
#include<iomanip>
using namespace std;
double calculateAverage(int testScores[],int size) {
    int totalSum = 0;
    for(int i = 0; i < size; i++){
        totalSum += testScores[i];
    }
    return (double) totalSum / size;
}
int main(){
    int numberofStudents;
    cout << "Enter Number of Students" << endl;
    cin >> numberofStudents;
    int* studentScores = new int[numberofStudents];
    cout << numberofStudents << " Enter Marks of each student" << endl;
    for(int i = 0; i < numberofStudents; i++) {
        cin >> studentScores[i];
    }
    double classAverage = calculateAverage(studentScores, numberofStudents);
    cout << fixed << setprecision(2);
    cout << "average score of a class is " << classAverage << endl;
    delete[] studentScores;
    return 0;
}

// --- ASSIGNMENT 3 PART 1 - PROGRAM 2 ---
#include<iostream>
using namespace std;
int calculateLowest(int testScores[], int size) {
    int lowest = testScores[0];
    for(int i = 1; i < size; i++){
        if(testScores[i] < lowest){
            lowest = testScores[i];
        }
    }
    return lowest;
}
int calculateHighest(int testScores[], int size){
    int highest = testScores[0];
    for(int i = 1; i < size; i++){
        if(testScores[i] > highest) {
            highest = testScores[i];
        }
    }
    return highest;
}
int main(){
    int numberofStudents;
    cout << "Enter numberofStudents" << endl;
    cin >> numberofStudents;
    int scores[100];
    cout << "Enter scores";
    for(int i = 0; i < numberofStudents; i++){
        cin >> scores[i];
    }
    cout << "Lowest Score:" << calculateLowest(scores, numberofStudents) << endl;
    cout << "Highest Score:" << calculateHighest(scores, numberofStudents) << endl;
    return 0;
}

// --- ASSIGNMENT 3 PART 1 - PROGRAM 3 ---
#include<iostream>
using namespace std;
int calculatePower(int base, int exponent){
    int result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;
}
int main(){
    int base, exponent;
    cout << "Enter Base and Exponent" << endl;
    cin >> base >> exponent;
    int ans = calculatePower(base, exponent);
    cout << base << " raised to the power " << exponent << " is " << ans;
    return 0;
}

// --- ASSIGNMENT 3 PART 1 - PROGRAM 4 ---
#include<iostream>
using namespace std;
void calculateVoltage(int current, int resistance){
    cout << "Enter Current and Resistance" << endl;
    cin >> current >> resistance;
    cout << "The Total Voltage is " << current * resistance << endl;
}
int main(){
    int current = 0, resistance = 0;
    calculateVoltage(current, resistance);
    return 0;
}

// --- ASSIGNMENT 3 PART 1 - PROGRAM 5 ---
#include<iostream>
using namespace std;
bool initialFinder(char teamInitials[], int size, char targetInitial){
    for(int i = 0; i < size; i++){
        if(teamInitials[i] == targetInitial) {
            return true;
        }
    }
    return false;
}
int main(){
    char playingEleven[11] = {'a','b','d','f','g','t','u','i','p','q','c'};
    char targetInitial;
    cout << "Enter Players initial" << endl;
    cin >> targetInitial;
    if (initialFinder(playingEleven, 11, targetInitial)){
        cout << "The Player is in the team" << endl;
    }else{
        cout << "Player not found" << endl;
    }
    return 0;
}

// --- ASSIGNMENT 3 PART 1 - PROGRAM 6 ---
#include<iostream>
using namespace std;
int calculateLength(char word[]){
    int count = 0;
    while(word[count] != '\0'){
        count++;
    }
    return count;
}
int main(){
    char word[100];
    cout << "Enter Word" << endl;
    cin >> word;
    int length = calculateLength(word);
    cout << "The length of a word is " << length << endl;
    return 0;
}





