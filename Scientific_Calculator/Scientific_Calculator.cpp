// Scientific_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include<windows.h>

using namespace std;

void show_calculator() {
    cout << "------------------------------------------" << endl;
    cout << "--------                         ---------" << endl;
    cout << "---            SCIENTIFIC             ----" << endl;
    cout << "---            CALCULATOR             ----" << endl;
    cout << "--------                         ---------" << endl;
    cout << "------------------------------------------" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     +      |      -      |      *      -" << endl;
    cout << "-    ADD     |    MINUS    |   MULTIPLY  -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     /      |      m      |      L      -" << endl;
    cout << "-  DIVIDE    |     MOD     |     LOG     -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     S      |      C      |      P      -" << endl;
    cout << "-   SQUARE   |     CUBE    |    POWER    -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     s      |      c      |      t      -" << endl;
    cout << "-    SIN     |     COS     |     TAN     -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     r      |      k      |      .      -" << endl;
    cout << "-  SQ ROOT   |    CLEAR    |    CLOSE    -" << endl;
    cout << "------------------------------------------" << endl;
}

void display_output(double answer) {
    cout << "------------------------------------------" << endl;
    cout << "--------                         ---------" << endl;
    cout << "---     CURRENT       |     " << endl;
    cout << "---     OUTPUT IS:    |  " << answer << endl;
    cout << "--------                         ---------" << endl;
    cout << "------------------------------------------" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     +      |      -      |      *      -" << endl;
    cout << "-    ADD     |    MINUS    |   MULTIPLY  -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     /      |      m      |      L      -" << endl;
    cout << "-  DIVIDE    |     MOD     |     LOG     -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     S      |      C      |      P      -" << endl;
    cout << "-   SQUARE   |     CUBE    |    POWER    -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     s      |      c      |      t      -" << endl;
    cout << "-    SIN     |     COS     |     TAN     -" << endl;
    cout << "------------------------------------------" << endl;
    cout << "-     r      |      k      |      .      -" << endl;
    cout << "-  SQ ROOT   |    CLEAR    |    CLOSE    -" << endl;
    cout << "------------------------------------------" << endl;
}


int main()
{
    double num1 = 0.0;
    double num2 = 0.0;

    double answer = 0.0;
    char inp = '/n';
    bool converter = 0;
    while (inp != '.')
    {
        if (converter == 1)
        {
            display_output(answer);
            cout << "Enter: ";
            cin >> inp;
            if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p')
            {
                num1 = answer;

                cout << "Enter num 2: ";
                cin >> num2;
            }
            else if (inp == 'k' || inp == '.')
            {

            }
            else
            {
                num1 = answer;
            }

        }
        else
        {
            show_calculator();
            cout << "Enter: ";
            cin >> inp;
            if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p')
            {
                cout << "Enter num 1: ";
                cin >> num1;

                cout << "Enter num 2: ";
                cin >> num2;
            }
            else if (inp == 'k' || inp == '.')
            {

            }
            else
            {
                cout << "Enter num 1: ";
                cin >> num1;
            }

            converter = 1;
        }

        switch (inp)
        {
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = num1 / num2;
            break;
        case 'm':
            answer = int(num1) % int(num2);
            break;
        case 'L':
            answer = log(num1);
            break;
        case 'S':
            answer = num1*num1;
            break;
        case 'C':
            answer = num1*num1*num1;
            break;
        case 'p':
            answer = pow(num1, num2);
            break;
        case 's':
            answer = sin(num1);
            break;
        case 'c':
            answer = cos(num1);
            break;
        case 't':
            answer = tan(num1);
            break;
        case 'r':
            answer = sqrt(num1);
            break;
        case 'k':
            converter = 0;
            break;
        case '.':
            break;
        default:
            cout << "~~~~~You Entered Invalid Value!~~~~~ " << endl;
        }
        system("cls");
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

