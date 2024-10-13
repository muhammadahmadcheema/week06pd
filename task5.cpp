#include<iostream>
#include<string>
using namespace std;


float fruitprice(string fruit, string day, double quantity);

main(){

    string fruit, day;
    double quantity;
    float result;


cout << "Enter the fruit name: ";
cin >> fruit;

cout << endl << "Enter the day of the week (e.g. Monday, Sunday): ";
cin >> day;

cout << endl << "Enter the quantity: ";
cin >> quantity;

result = fruitprice(fruit, day, quantity);
cout << endl << result;

}

float fruitprice(string fruit, string day, double quantity){
    float price;
    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"){
        if(fruit == "banana"){
            price = quantity * 2.5;
        }
        if(fruit == "apple"){
            price = quantity * 1.2;
        }
        if(fruit == "orange"){
            price = quantity * 0.85;
        }
        if(fruit == "grapefruit"){
            price = quantity * 1.45;
        }
        if(fruit == "kiwi"){
            price = quantity * 2.7;
        }
        if(fruit == "pineapple"){
            price = quantity * 5.5;   
        }
        if(fruit == "grapes"){
            price = quantity * 3.85;   
        }
    }

    if(day == "Saturday" || day == "Sunday"){
        if(fruit == "banana"){
            price = quantity * 2.7;
        }
        if(fruit == "apple"){
            price = quantity * 1.25;
        }
        if(fruit == "orange"){
            price = quantity * 0.9;
        }
        if(fruit == "grapefruit"){
            price = quantity * 1.6;
        }
        if(fruit == "kiwi"){
            price = quantity * 3.0;
        }
        if(fruit == "pineapple"){
            price = quantity * 5.6;   
        }
        if(fruit == "grapes"){
            price = quantity * 4.20;   
        }
    }

    if((day != "Monday" && day != "Tuesday" && day != "Wednesday" && day != "Thursday" && day != "Friday" && day != "Saturday" && day != "Sunday") || (fruit != "banana" && fruit != "apple" && fruit != "orange" && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes")){
            cout << endl << "error";    
    }

    return price;
}