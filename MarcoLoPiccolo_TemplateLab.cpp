// MarcoLoPiccolo_TemplateLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>     //Preproccessor Directive
#include <cmath>       //Allows us to use built in math functions
using namespace std;    //Allows us to use cout and cin without needing std:: in front of it
template<class AnyValue>        //Creates general variable type that can accept any value such as int, float, double

void absoluteValue(AnyValue userInput1, AnyValue userInput2) {      //void is used in this function so that it can return the absolute value of both inputted values
        cout << "The absolute value of " << userInput1 << " is " << abs(userInput1) << endl;     //returns original value inputted by user and then outputs the absolute value of it
        cout << "The absolute value of " << userInput2 << " is " << abs(userInput2) << endl;
}

int main()
{
    int intInput1, intInput2;          //two variables of each type are created to check to make sure the template function works
    double doubleInput1, doubleInput2;
    float floatInput1, floatInput2;

    cout << "Please enter values of type int that you would like the absolute value of" << endl;   //Asks the user to enter values of each type starting with int
    cout << "Please enter the first integer value" << endl;                                        //user enters int values
    cin >> intInput1;
    cout << "Please enter the second integer value" << endl;
    cin >> intInput2;
    absoluteValue(intInput1, intInput2);                                                         //calls template function that is void so that it can return multiple values

    cout << "Please enter values of type double that you would like the absolute value of" << endl;   //Then of type double
    cout << "Please enter the first double value" << endl;                                        //user enters double values
    cin >> doubleInput1;
    cout << "Please enter the second double value" << endl;
    cin >> doubleInput2;
    absoluteValue(doubleInput1, doubleInput2);                                             //calls template function that is void so that it can return multiple values

    cout << "Please enter values of type float that you would like the absolute value of" << endl;   //then of type float
    cout << "Please enter the first float value" << endl;                                     //user enters float values
    cin >> floatInput1;  
    cout << "Please enter the second float value" << endl;
    cin >> floatInput2;
    absoluteValue(floatInput1, floatInput2);                                     //calls template function that is void so that it can return multiple values

    system("Pause");
    return 0;
}


