#include<iostream>
#include<iomanip>
#include<string>
using namespace std;



string calculatehotelprices(string month, int stay);

main(){
    string month;
    int stay;

    cout << "Enter the month(May, June, July, August, September, October): ";
    cin >> month;

    cout << endl << "Enter the number of stays: ";
    cin >> stay;

   string prices = calculatehotelprices(month, stay);
   cout << prices << endl;
}

string calculatehotelprices(string month, int stay){

    string output1, output2;
    float sprice, aprice;

    if(month == "May" || month == "October"){
        if(stay <= 7){
        sprice = 50*stay;
        }
        if(stay <= 14){
        aprice = 65*stay;
        }
        if(stay > 7 && stay <= 14){
        sprice = (50*stay)*0.95;
        }
        if(stay > 14){
        sprice = (50*stay)*0.7;
        aprice = (65*stay)*0.9;
        }

    }

        if(month == "June" || month == "September"){
        if(stay <= 14){
        sprice = 75.2*stay;
        aprice = 68.7*stay;
        }
        if(stay > 14){
        sprice = (75.2*stay)*0.8;
        aprice = (68.7*stay)*0.9;
        }

    }

        if(month == "July" || month == "August"){
        sprice = 76*stay;
        if(stay <= 14){
        aprice = 77*stay;
        }
        if(stay > 14){
        aprice = (77*stay)*0.9;
        }

    }

output1 = "Apartment: " + to_string(aprice) + "$.";
output2 = "Studio: " + to_string(sprice) + "$.";

return output1 + "\n" + output2;


}