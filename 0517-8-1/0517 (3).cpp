#include <iostream>
using namespace std;
class Time
{
public:
    void set_time(void);
    void show_time(void);
    int hour, minute, sec;
};
Time t;
int main()
{
    t.set_time();
    t.show_time();
}

void Time::set_time(void)
{
    cin >> t.hour;
    cin >> t.minute;
    cin >> t.sec;
}
void Time::show_time(void)
{
    cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}
