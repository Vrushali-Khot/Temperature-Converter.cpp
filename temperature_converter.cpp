//Task 5 - Temperature Converter
// Create a program that allows the user to
// convert temperatures between Fahrenheit and
// Celsius.

#include <iostream>
using namespace std;

int main(){
    double fah;
    double cel;

    int input;
    cin>>input;

    switch(input){

        case 1:
        cout<<"Fahrenheit:";
        cin>>fah;
        cel = (fah - 32)* 5/9;
        cout<<"-------------------\n";
        cout<<"| "<<fah<<"F"<<" = "<<cel<<"C  |"<<endl;
        cout<<"-------------------\n";
        cout<<"\n";
        break;


        case 2:
        cout<<"Celcius:";
        cin>>cel;
        fah = ((cel*9)/5)+32;
        cout<<"-------------------\n";
        cout<<"| "<<cel<<"C"<<" = "<<fah<<"F  |"<<endl;
        cout<<"-------------------\n";
        cout<<"\n";
        break;

        default:
        cout<<"--------------\n";
        cout<<"|  32F = 0C  |"<<endl;
        cout<<"--------------\n";
    
    }

    return 0;
}