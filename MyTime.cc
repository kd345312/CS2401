// The implementation file for the MyTime class
#include "MyTime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void MyTime::Reset(int h, int m){
    hours = h;
    minutes = m;
}

void MyTime::simplify(){
    hours += minutes/60;
    minutes = minutes%60;
}

MyTime MyTime::operator + (const MyTime& t1){
    MyTime tmp;
    tmp.hours = t1.hours + hours;
    tmp.minutes = t1.minutes + minutes;
    tmp.simplify();
    return tmp;
}

MyTime MyTime::operator - (const MyTime& t1){
    MyTime tmp;
    tmp.minutes = abs((t1.hours*60+t1.minutes) -
                      (hours*60+minutes));
    tmp.simplify();
    return tmp;
}

MyTime MyTime::operator / (int num){
    MyTime tmp;
    tmp.minutes = hours*60 + minutes;
    tmp.minutes /= num;
    tmp.simplify();
    return tmp;
}

MyTime MyTime::operator * (int num)const{
    MyTime tmp;
    tmp.minutes = hours*60 + minutes;
    tmp.minutes *= num;
    tmp.simplify();
    return tmp;
}

bool MyTime::operator == (const MyTime& t1){
    return t1.hours == hours && t1.minutes == minutes;
}

bool MyTime::operator < (const MyTime& t1){
    return (t1.hours*60 + t1.minutes) < (hours*60 + minutes);
}

bool MyTime::operator <=(const MyTime& t1){
    return (t1.hours*60 + t1.minutes) <= (hours*60 + minutes);
}

void MyTime::input(istream&ins){
    // Here you are to copy the implementation code from the >> operator shown below
    // remember to that variables will be local here - so no referene to t1
    //Then you can have the >> operator call this function.
    // In the .h file remove the word friend for the operator and move its prototype to a spot
    // under the class declaration
    char junk;
    ins>>hours;
    ins.get(junk);
    ins>>minutes;
    simplify();
}

void MyTime::output(ostream& outs){
    // Do the same thing a you did for the function above except using the code for the <<
    //operator
    outs<<hours<<':'<<setw(2)<<setfill('0')<<minutes;
}


ostream& operator <<(ostream& outs, MyTime& t1){
    t1.output(outs);
    return outs;
}

istream& operator >> (istream& ins, MyTime& t1){
    t1.input(ins);
    return ins;
}
