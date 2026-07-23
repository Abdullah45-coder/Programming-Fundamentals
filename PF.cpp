// ==============================================================================
// Name: M. Abdullah Imran
// Roll#: SU92-BSSEM-F25-041
// Consolidated Source Code for All Uploaded Files
// ==============================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cctype>

using namespace std;

// ==========================================
// 1. ASSIGNMENT 3 PART 1
// ==========================================

// Program 01
double calculateAverage_A3P1(int testScores[], int size) {
    int totalSum = 0;
    for(int i = 0; i < size; i++){
        totalSum += testScores[i];
    }
    return (double) totalSum / size;
}

// Program 02
int calculateLowest_A3P1(int testScores[], int size) {
    int lowest = testScores[0];
    for(int i = 1; i < size; i++){
        if(testScores[i] < lowest){
            lowest = testScores[i];
        }
    }
    return lowest;
}
int calculateHighest_A3P1(int testScores[], int size){
    int highest = testScores[0];
    for(int i = 1; i < size; i++){
        if(testScores[i] > highest) {
            highest = testScores[i];
        }
    }
    return highest;
}

// Program 03
int calculatePower_A3P1(int base, int exponent){
    int result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;
}

// Program 04
void calculateVoltage_A3P1(int current, int resistance){
    cout << "Enter Current and Resistance" << endl;
    cin >> current >> resistance;
    cout << "The Total Voltage is " << current * resistance << endl;
}

// Program 05
bool initialFinder_A3P1(char teamInitials[], int size, char targetInitial){
    for(int i = 0; i < size; i++){
        if(teamInitials[i] == targetInitial) {
            return true;
        }
    }
    return false;
}

// Program 06
int calculateLength_A3P1(char word[]){
    int count = 0;
    while(word[count] != '\0'){
        count++;
    }
    return count;
}


// ==========================================
// 2. ASSIGNMENT 3 PART 2
// ==========================================

// Program 01
int calculate2Low_A3P2(int arr[], int size) {
    int low = INT_MAX, secondLow = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < low) { secondLow = low; low = arr[i]; }
        else if (arr[i] < secondLow && arr[i] != low) secondLow = arr[i];
    }
    return secondLow;
}
int calculate2High_A3P2(int arr[], int size) {
    int high = INT_MIN, secondHigh = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > high) { secondHigh = high; high = arr[i]; }
        else if (arr[i] > secondHigh && arr[i] != high) secondHigh = arr[i];
    }
    return secondHigh;
}

// Program 02
double calculateSum_A3P2(int arr[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

// Program 03
double celciustoFahrenheit_A3P2(double c){
    return (c * 9.0 / 5.0) + 32;
}

// Program 04
bool leapyear_A3P2(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    return false;
}

// Program 05
int vowelcounter_A3P2(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

// Program 06
void bubbleSort_A3P2(char arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}


// ==========================================
// 3. ASSIGNMENT 3 PART 3
// ==========================================

// Program 01
int countEvenNumbers_A3P3(int array[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(array[i] % 2 == 0) count++;
    }
    return count;
}
int countOddNumbers_A3P3(int array[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(array[i] % 2 != 0) count++;
    }
    return count;
}

// Program 03
int findGCD_A3P3(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Program 04
int calculateStrikeRate_A3P3(int runs, int balls) {
    return ((double) runs / balls) * 100;
}

// Program 05
int getlength_A3P3(char arr[]){
    int length = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        length++;
    }
    return length;
}

// Program 06
void countword_A3P3(char src[], char dest[], int length) {
    for (int i = 0; i < length; i++){
        dest[i] = src[i];
    }
    dest[length] = '\0';
}


// ==========================================
// 4. ASSIGNMENT PART 4
// ==========================================

// Program 03
double calculateArea_P4(double sideLength) {
    return sideLength * sideLength;
}
double calculateArea_P4(double rectLength, double rectWidth) {
    return rectLength * rectWidth;
}

// Program 04
double getBowlingAverage_P4(int runsConceded, int wicketsTaken) {
    if (wicketsTaken == 0) return 0.0;
    return (double) runsConceded / wicketsTaken;
}

// Program 05
void printWordVertically_P4(char characterArray[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << characterArray[i] << endl;
    }
}

// Program 06
void reverseWord_P4(char characterArray[], int arraySize) {
    int startPointer = 0;
    int endPointer = arraySize - 1;
    while (startPointer < endPointer) {
        char temporaryHolder = characterArray[startPointer];
        characterArray[startPointer] = characterArray[endPointer];
        characterArray[endPointer] = temporaryHolder;
        startPointer++;
        endPointer--;
    }
}


// ==========================================
// 5. PROGRAMMING FUNDAMENTALS (ASSIGNMENT 2 & THEORY)
// ==========================================

// Core calculation logic snippets from complex apps (LESCO/Restaurant/Grocery/Store bills)
double calculateConsumption_PF(int units) {
    double rates[8] = {12.21, 14.53, 31.51, 38.41, 41.62, 43.04, 44.18, 49.10};
    if(units <= 100) return units * rates[0];
    else if(units <= 200) return units * rates[1];
    else if(units <= 300) return units * rates[2];
    else if(units <= 400) return units * rates[3];
    else if(units <= 500) return units * rates[4];
    else if(units <= 600) return units * rates[5];
    else if(units <= 700) return units * rates[6];
    else return units * rates[7];
}

// Main function container to compile cleanly
int main() {
    cout << "M. Abdullah Imran - All Codes Consolidated Successfully!" << endl;
    return 0;
}
