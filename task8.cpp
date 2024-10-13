#include<iostream>
#include<cmath>
using namespace std;

int calculatevolleyballgames(string yeartype, int holidays, int hometownweekends);

main(){

string type;
int holidays, weekends, result;

cout << "Enter year type: ";
cin >> type;

cout << endl << "Enter number of holidays: ";
cin >> holidays;

cout << endl << "Enter number of weekends: ";
cin >> weekends;

result = calculatevolleyballgames(type, holidays, weekends);
cout << endl << result;

}

int calculatevolleyballgames(string yeartype, int holidays, int hometownweekends){


float fhometownweekends, playableweekends, playableholidays, fholidays, totalplayableweekends;

    fhometownweekends = hometownweekends; 
    fholidays = holidays; 
    playableweekends = 48 - fhometownweekends;
    playableweekends = playableweekends * 0.75; 
    playableweekends = playableweekends + fhometownweekends;
    playableholidays = fholidays * 2 / 3; 
    totalplayableweekends = playableholidays + playableweekends;

    if(yeartype == "leap"){
        totalplayableweekends = totalplayableweekends * 1.15;
        int playable = floor(totalplayableweekends);
        return playable;
    }
    else{
        int playable = floor(totalplayableweekends);
        return playable;
    }


}