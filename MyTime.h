// need doucumentation for each member function - similar to your last
// project
#include <iostream>

class MyTime
{
public:
    
    // CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES
    // DEFAULT ARGUMENTS
    MyTime(int h = 0, int m = 0){hours = h; minutes = m;}
    
    void Reset(int h, int m);
    
    MyTime operator + (const MyTime& t1);
    
    MyTime operator - (const MyTime& t1);
    
    MyTime operator * (int num)const;
    
    MyTime operator / (int num);
    
    bool operator == (const MyTime& t1);
    
    bool operator < (const MyTime& t1);
    
    bool operator <= (const MyTime& t1);
    
    void input(std::istream& ins);
    
    void output(std::ostream& outs);
    
    int get_hours() const{return hours;}
    int get_minutes() const{return minutes;}
    
private:
    void simplify();
    int hours;      // hours can be > 24
    int minutes;   // 0 <= minutes <= 59
};

std::istream& operator >>(std::istream& ins, MyTime& t1);

std::ostream& operator <<(std::ostream& outs, MyTime& t1);
