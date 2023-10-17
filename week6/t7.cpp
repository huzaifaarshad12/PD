#include <iostream>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

main()
{
    int ehour, emin, marrival, harrival;

    cout << "Enter Exam Starting Time (hour): ";
    cin >> ehour;

    cout << "Enter Exam Starting Time (minutes): ";
    cin >> emin;

    cout << "Enter Student hour of arrival: ";
    cin >> harrival;

    cout << "Enter Student minutes of arrival: ";
    cin >> marrival;

    string result = checkStudentStatus (ehour, emin, harrival, marrival);
    cout << result;
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int etime, arrivetime;

    string result;
    etime = examHour * 60 + examMinute;
    arrivetime = studentHour * 60 + studentMinute;

    if (arrivetime == etime || (etime - arrivetime) <= 30)
    {
        result = "On time";
        if ((etime - arrivetime) <= 30 && (etime - arrivetime) != 0)
        {
            result = "On time\n" + to_string(etime - arrivetime) + " minutes before the start";
        }
    }
     if (arrivetime < etime)
    {
        if (etime - arrivetime < 60 && (etime - arrivetime) > 30)

         result = "Early\n" + to_string(etime - arrivetime) + " minutes before the start";
        if (etime - arrivetime >= 60)

        {   
        int h, m;
        int timeremains = etime - arrivetime;
        int hours = timeremains / 60;
        h = hours % 10;

        if (hours == 1)

        {
         m = 0;
         }

         else

         {
        if (timeremains >60)

        {
         m = timeremains-(60 * h);
       }

         }

         result = "Early\n"+ to_string(h) +":"+ to_string(m)+ " hours before the start";
        }

        }
        
        if (arrivetime > etime)

        {
        if (arrivetime - etime < 60)

        {
            int timeremains = arrivetime - etime;
            result = "Late\n" + to_string(timeremains) + " minutes after the start";
        }

        if (arrivetime - etime >= 60)

        {
        int h, m;
        int timeremains = arrivetime - etime;
        int hours = timeremains / 60;
        h = hours % 10;
    if (hours == 1)

    {
    m = 0;
    }

    if (timeremains > 60)

    {              
     m = timeremains - (60 * h);
    }

        result = "Late\n" + to_string(hours) + ":" + to_string(m) + " hours after the start";
        }

    }

    return result;
}

