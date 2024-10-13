#include<iostream>
using namespace std;

string checkstudentstatus(int ehour, int eminute, int shour, int sminute);

main(){

int ehour, eminute, shour, sminute;
string output;

cout << endl << "Enter exam starting time(hour): ";
cin >> ehour;

cout << endl << "Enter exam starting time(minutes): ";
cin >> eminute;

cout << endl << "Enter student hour of arrival: ";
cin >> shour;

cout << endl << "Enter student minutes of arrival: ";
cin >> sminute;

output = checkstudentstatus(ehour, eminute, shour, sminute);
cout << endl << output;

}

string checkstudentstatus(int ehour, int eminute, int shour, int sminute) {
    int examTime = ehour * 60 + eminute;
    int studentTime = shour * 60 + sminute;
    int diff = studentTime - examTime;

    string output, timeout;

    if (diff < -30) {
       
        output = "Early";
        diff = diff * -1; 
        int remhour = diff / 60;
        int remmin = diff % 60;
        if (remhour > 0) {
            timeout = to_string(remhour) + " hours and " + to_string(remmin) + " minutes before the start";
        } else {
            timeout = to_string(remmin) + " minutes before the start";
        }
    } else if (diff <= 0) {
        
        output = "On Time";
        timeout = " ";
    } else {
        
        output = "Late";
        int remhour = diff / 60;
        int remmin = diff % 60;
        if (remhour > 0) {
            timeout = to_string(remhour) + " hours and " + to_string(remmin) + " minutes after the start";
        } else {
            timeout = to_string(remmin) + " minutes after the start";
        }
    }

    return output + "\n" + timeout;
}