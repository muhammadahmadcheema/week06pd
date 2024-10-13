#include<iostream>
using namespace std;

string findzodiacsigns(int day, string month);

main(){

int day;
string month, zodiac;

cout << "Enter the day of birth: ";
cin >> day;

cout << endl << "Enter the month of birth (e.g. January, February): ";
cin >> month;

zodiac = findzodiacsigns(day, month);

cout << endl << "Zodiac Sign: " << zodiac;

}

string findzodiacsigns(int day, string month){

    string zodiac;

if((month == "March" && (day >= 21 && day <= 30)) || (month == "April" && (day > 0 && day <= 19))){
    zodiac = "Aries";
}


if((month == "April" && (day >= 20 && day <= 30)) || (month == "May" && (day > 0 && day <= 20))){
    zodiac = "Taurus";
}

if((month == "May" && (day >= 21 && day <= 30)) || (month == "June" && (day > 0 && day <= 20))){
    zodiac = "Gemini";
}

if((month == "June" && (day >= 21 && day <= 30)) || (month == "July" && (day > 0 && day <= 22))){
    zodiac = "Cancer";
}

if((month == "July" && (day >= 23 && day <= 30)) || (month == "August" && (day > 0 && day <= 22))){
    zodiac = "Leo";
}

if((month == "August" && (day >= 23 && day <= 30)) || (month == "September" && (day > 0 && day <= 22))){
    zodiac = "Virgo";
}

if((month == "September" && (day >= 23 && day <= 30)) || (month == "October" && (day > 0 && day <= 22))){
    zodiac = "Libra";
}

if((month == "October" && (day >= 23 && day <= 30)) || (month == "November" && (day > 0 && day <= 21))){
    zodiac = "Scorpio";
}

if((month == "November" && (day >= 22 && day <= 30)) || (month == "December" && (day > 0 && day <= 21))){
    zodiac = "Sagittarius";
}

if((month == "December" && (day >= 22 && day <= 30)) || (month == "January" && (day > 0 && day <= 19))){
    zodiac = "Capricon";
}

if((month == "January" && (day >= 20 && day <= 30)) || (month == "February" && (day > 0 && day <= 18))){
    zodiac = "Aquarius";
}

if((month == "February" && (day >= 19 && day <= 30)) || (month == "March" && (day > 0 && day <= 20))){
    zodiac = "Pisces";
}


return zodiac;


}