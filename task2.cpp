#include<iostream>
using namespace std;

float calculateaverage(float english, float maths, float chemistery, float socialscience, float biology);

string calculategrade(float average);


main(){

    string name;
    float english, maths, chemistery, socialscience, biology;
    float average;
    string grade;


cout << "Enter student Name: ";
cin >> name;

cout << endl << "Enter marks for English: ";
cin >> english;

cout << endl << "Enter marks for maths: ";
cin >> maths;

cout << endl << "Enter marks for Chemistery: ";
cin >> chemistery;

cout << endl << "Enter marks for Social Science: ";
cin >> socialscience;

cout << endl << "Enter marks for Biolody: ";
cin >> biology;

average = calculateaverage(english, maths, chemistery, socialscience, biology);
grade = calculategrade(average);

cout << endl << "Student Name: " << name;
cout << endl << "Percentage: " << average << "%";
cout << endl << "Grade: " << grade;

}

float calculateaverage(float english, float maths, float chemistery, float socialscience, float biology){
float average = (english + maths + chemistery + socialscience + biology) / 5;
return average;
}

string calculategrade(float average){

if(average >= 90 && average <= 100){
    string grade = "A+";
    return grade;
}

if(average >= 80 && average < 90){
    string grade = "A";
    return grade;
}

if(average >= 70 && average < 80){
    string grade = "B+";
    return grade;
}

if(average >= 60 && average < 70){
    string grade = "B";
    return grade;
}

if(average >= 50 && average < 60){
    string grade = "C";
    return grade;
}


if(average >= 40 && average < 50){
    string grade = "D";
    return grade;
}

if(average < 40){
    string grade = "F";
    return grade;
}

}
