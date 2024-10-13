#include<iostream>
using namespace std;

void commscompany(char type, float minutes, char time);

main(){
char type, time;
float minutes;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
        cin >> type;

    if(type == 'p' || type == 'P'){
    cout << endl << "Enter the time of the call (D/d for day, N/n for night): ";
        cin >> time;}
    else{
        time = '0';
    }

    cout << endl << "Enter the number of minutes used: ";
        cin >> minutes;
    
commscompany(type, minutes, time);
}

void commscompany(char type, float minutes, char time){

    float cost = 0;
    float minutescost;
    float remainingmin; 

    if(type == 'R' || type == 'r'){
        cost = cost + 10;
        if(minutes > 50){
            remainingmin = minutes - 50;
            minutescost = 0.2 * remainingmin;
            cost = cost + minutescost;}
        else{
            cost = 10;
        }

    }

    if(type == 'P' || type == 'p'){
        cost = cost + 25;
        if(time == 'D' || time == 'd'){
            if(minutes > 75){
                remainingmin = minutes - 75;
                minutescost = 0.1 * remainingmin;
                cost = cost + minutescost;
            }
            else{
                cost = 25;
            }
        }

                if(time == 'N' || time == 'n'){
            if(minutes > 100){
                remainingmin = minutes - 100;
                minutescost = 0.05 * remainingmin;
                cost = cost + minutescost;
            }
            else{
                cost = 25;
            }
        }

    }

        if(type == 'R' || type == 'r'){
            cout << endl << "Service Type: Regular";
        }
        else{
            cout << endl << "Service Type: Premium";
        }

        cout << endl << "Total Minutes Used: " << minutes << " minutes";
        cout << endl << "Amount Due: $" << cost;

    



}