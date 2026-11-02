/*
If age is greater or equal to 18 print "adult" else teen. Age is integer, age taken as input
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;

    cin >> age;
    if(age>=18){
        cout << "Adult";
    }else{
        cout << "Teen";
    }

    return 0;
}