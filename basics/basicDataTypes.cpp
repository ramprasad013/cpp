#include<bits/stdc++.h>
using namespace std;

int main(){
    //Cin >> This syntax used to take input in CPP
    //dataType variable_name = value; This syntax used in cpp for variable declaration

    int num; //num stores INT_MIN to INT_MAX integers
    cin >> num; //Take input from terminal and store in num variable
    cout << num << endl; //Print num and move to next line

    //to store a value beyond int use long
    long num1 = LONG_MAX;
    cout << num1 << endl;

    //to store a value beyond long use long long
    long long num2 = LLONG_MAX;
    cout << num2 << endl;

    //to store decimal values use float
    float num3 = 14.34567;
    cout << num3 << endl;

    //float store upto 7 decimal precesion beyond that upto 15 decimals use double
    double num4 = 14.1234567890;
    cout << num4 << endl;

    //to store a single char from ascill in 256 char use char.
    char character = 'a';
    cout <<"Character is"<< character << endl;

    //to store a word use string, string is class coming from std just like cin and cout
    string word = "Hello there";

    cout << word << endl;

    return 0;
}