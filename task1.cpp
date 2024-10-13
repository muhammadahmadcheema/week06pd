#include<iostream>
using namespace std;


string decideactivity(string temp, string humidity);

main(){

string temp, humidity, result;

cout << "Enter temperature (warm or cold): ";
cin >> temp;

cout << endl << "Enter humidity (dry or humid): ";
cin >> humidity;

result = decideactivity(temp, humidity);
cout << endl << result;

}

string decideactivity(string temp, string humidity){

string result;

if(temp == "warm" && humidity == "dry"){
result = "Play tennis";
return result;
}

if(temp == "warm" && humidity == "humid"){
result = "swim";
return result;
}

if(temp == "cold" && humidity == "dry"){
result = "Play basketball";
return result;
}

if(temp == "cold" && humidity == "humid"){
result = "Watch tv";
return result;
}

}