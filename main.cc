#include "MyTime.h"
#include <iostream>
using namespace std;

int main(){
    MyTime t1, t2;
    int scalar;
    cout << "Enter time 1: ";
    cin >> t1;
    cout << "Enter time 2: ";
    cin >> t2;
    cout << "And finally enter a scalar for math manipulation: ";
    cin >> scalar;
    //cout << t1 << " + " << t2 << " = " << t1-t2 << endl;
    
    cout << t1 << " x " << scalar << " = " << t1 * scalar << endl;
    
    if(t1 == t2)
        cout << t1 << " is equal to " << t2 << endl;
    else if(t1 < t2)
        cout << t1 << " is greater than " << t2 << endl;
    else
        cout << t1 << " is less than " << t2 << endl;
    return 0;
}
