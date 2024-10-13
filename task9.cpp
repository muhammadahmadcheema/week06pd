#include<iostream>
using namespace std;

string checkpointposition(int h, int x, int y){

    string result;

//first we check for horizontal block.
    if(x >= 0 && x <= 3*h && y >= 0 && y <= h){
        if((x >= 0 && x <= 3*h) && (y == 0 || y == h)){
            result = "Border";
        }
        else{
            result = "Inside";
        }
    }

//then we check for vertical block.
    if(x >= h && x <= 2*h && y <= 4*h){
        if((y >= h && y <= 4*h) && (x == h || x == 2*h)){
            result = "Border";
        }
        else{
            result = "Inside";
        }
    }

//if both conditions fail then for sure it is outside.
    else{
        result = "Outside";
    }

    return result;

}

main(){

int h, x, y;
string result; 

    cout << "Enter height: ";
    cin >> h;

    cout << endl << "Enter x coordinate: ";
    cin >> x;

    cout << endl << "Enter y coordinate: ";
    cin >> y;

    result = checkpointposition(h,x,y);
    cout << endl << result;

 }










