// ! todo Create a class called time that has separate int member data for hours, minutes, and seconds.
// * todo One constructor should initialize this data to 0, and another should initialize it to fixed values.
//  todo Another member function should display it, in 11:59:59 format.
// * todo  Overload  the binary operator ‘+’ to add two objects of type time.
// ! todo A main () program should create two (t1 & t2) initialized time objects and the one t3 that isn’t initialized. Then using overloaded ‘+’ operator function to apply the command t3 =
// todo t1 + t2. Finally it should display the values of all three time objects.

#include <iostream>
#include <conio.h>
using namespace std;

class Time
{
private:
    int Hours;
    int Minutes;
    int Seconds;

public:
    Time()
    {
        Hours = 0;
        Minutes = 0;
        Seconds = 0;
    }
    Time(int hours, int minute, int second)
    {
        Hours = hours;
        Minutes = minute;
        Seconds = second;
    }

    void display()
    {
        cout << Hours << ":" << Minutes << ":" << Seconds << endl;
    }

    Time operator+(Time t2)
    {
        int h = Hours + t2.Hours;
        int m = Minutes + t2.Minutes;
        int s = Seconds + t2.Seconds;

        if (s >= 60)
        {
            s = s - 60;
            m++;
        }
        if (m >= 60)
        {
            m = m - 60;
            h++;
        }

        return Time(h, m, s);
    }

    ~Time();
};

Time::~Time()
{
}

int main()
{
    Time t1, t2, t3;
    t1 = Time(2, 16, 50);
    t2 = Time(5, 10, 10);
    t3 = t1 + t2;
    cout << "First Time t1: ";
    t1.display();
    cout << "Second Time t2: ";
    t2.display();
    cout << "Adding two times t1+t2: ";
    t3.display();
    getch();

    return 0;
}
