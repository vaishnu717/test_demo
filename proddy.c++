#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

struct Proddy
{
    int hours;
    string date;
    string time;
    string work;
    string topic;
    string plans;
    
} pro[356];

int workhours = 0;
int progress = 0;
int total = 0;

void log()
{
    int choice;
    cout << "How Many Times Do You Want to Enter Data: ";
    cin >> choice;
    for (int i = total; i < total + choice; i++)
    {
        cout << "\n\t---TODAY PLANS---" << endl;
        cout << "\n\tTodays Date: ";
        cin >> pro[i].date;
        cout << "\n\tTime: ";
        cin >> pro[i].time;
        cout << "\n\tWorking On: ";
        cin >> pro[i].work;
        cout << "\n\tTopic: ";
        cin >> pro[i].topic;
        cout << "\n\tHours: ";
        cin >> pro[i].hours;
        workhours = workhours + pro[i].hours;
        cout << "\n\tFeelings & Learning: ";
        cin >> pro[i].plans;
    }
    total = total + choice;
    progress = total + choice;
}
void retrive()
{
    if (total != 0)
    {
        for (int i = 0; i < total; i++)
        {
            cout << "\n\t---TODAY PLANS---" << endl;
            cout << "\n\tTodays Date: " << pro[i].date << endl;
            cout << "\n\tTime: " << pro[i].time << endl;
            cout << "\n\tWorking On: " << pro[i].work << endl;
            cout << "\n\tTopic: " << pro[i].topic << endl;
            cout << "\n\tHours: " << pro[i].hours << endl;
            workhours = workhours + pro[i].hours;
            cout << "\n\tFeelings & Learning: " << pro[i].plans << endl;
            cout << "\n\tProgress: " << progress << " % " << endl;
        }
    }
    else
    {
        cout << "\n\tYour Record Is Empty!!" << endl;
    }
}
void search()
{
    if (total != 0)
    {
        string dat;
        cout << "\n\tEnter the Date of the Record you wanna Update: ";
        cin >> dat;
        for (int i = 0; i < total; i++)
        {
            if (dat == pro[i].date)
            {
                cout << "\n\t---TODAY PLANS---" << endl;
                cout << "\n\tTodays Date: " << pro[i].date << endl;
                cout << "\n\tTime: " << pro[i].time << endl;
                cout << "\n\tWorking On: " << pro[i].work << endl;
                cout << "\n\tTopic: " << pro[i].topic << endl;
                cout << "\n\tHours: " << pro[i].hours << endl;
                cout << "\n\tFeelings & Learning: " << pro[i].plans << endl;
                break;
            }
            if (i == total - 1)
            {
                cout << "\n\tNo such Record Found" << endl;
            }
        }
    }
    else
    {
        cout << "\n\tYour Record Is Empty!!" << endl;
    }
}
void update()
{
    if (total != 0)
    {
        string dat;
        cout << "\n\tEnter the Date of the Record you wanna Update: ";
        cin >> dat;
        for (int i = 0; i < total; i++)
        {
            if (dat == pro[i].date)
            {
                cout << "\n\tPrevious Data" << endl;
                cout << "\n\t---TODAY PLANS---" << endl;
                cout << "\n\tTodays Date: " << pro[i].date << endl;
                cout << "\n\tTime: " << pro[i].time << endl;
                cout << "\n\tWorking On: " << pro[i].work << endl;
                cout << "\n\tTopic: " << pro[i].topic << endl;
                cout << "\n\tHours: " << pro[i].hours << endl;
                cout << "\n\tFeelings & Learning: " << pro[i].plans << endl;
                string t;
                cout << "\n\tNow Enter The Time You Want to Update: ";
                cin >> t;
                if (dat == pro[i].date && t == pro[i].time)
                    cout << "\n\tEnter New Data" << endl;
                cout << "\n\t---TODAY PLANS---" << endl;
                cout << "\n\tTodays Date: ";
                cin >> pro[i].date;
                cout << "\n\tTime: ";
                cin >> pro[i].time;
                cout << "\n\tWorking On: ";
                cin >> pro[i].work;
                cout << "\n\tTopic: ";
                cin >> pro[i].topic;
                cout << "\n\tHours: ";
                cin >> pro[i].hours;
                workhours = workhours + pro[i].hours;
                cout << "\n\tFeelings & Learning: ";
                cin >> pro[i].plans;
                break;
            }
        }
    }
    else
    {
        cout << "\n\tYour Record Is Empty!!" << endl;
    }
}
void del()
{
    if (total != 0)
    {
        char user;
        cout << "\n\tEnter 1 to Delete Complete Data" << endl;
        cout << "\n\tEnter 2 to Delete Selective Data" << endl;
        cout << "\n\tEnter a Number Here: ";
        user = getch();
        if (user == 1)
        {
            total = 0;
            cout << "\n\tYour Complete Data is Deleted" << endl;
        }
        else if (user == 2)
        {
            string tit;
            cout << "\n\tNow Enter The Time You Want to Update: ";
            cin >> tit;
            for (int i = 0; i < total; i++)
            {
                for (int j = i; j < total; j++)
                {
                    if (tit == pro[i].time)
                    {
                        pro[j].date = pro[i + 1].date;
                        pro[j].time = pro[i + 1].time;
                        pro[j].work = pro[i + 1].work;
                        pro[j].topic = pro[i + 1].topic;
                        pro[j].plans = pro[i + 1].plans;
                        total--;
                        break;
                    }
                    if (i == total - 1)
                    {
                        cout << "\n\tNo such Record Found" << endl;
                    }
                }
            }
        }
    }
    else
    {
        cout << "\n\tYour Record Is Empty!!" << endl;
    }
}

int main()
{

    cout << "\n\tWELCOME TO THE PRODDY APP\n"
         << endl;
    int start;
    cout << "\tPLEASE SIGN UP" << endl;
    string user = "v";
    string pass = "v";
    string username, password;
    cout << "\n\tEnter Username: ";
    cin >> username;
    cout << "\n\tEnter Password: ";
    cin >> password;
    if (username == user && password == pass)
    {
        system("cls");
        cout << "\n\tWELCOME TO THE PRODDY APP\n"
             << endl;
        char user;
        while (1)
        {
            cout << endl;
            cout << "\t ______________________" << endl;
            cout << "\t|                      |" << endl;
            cout << "\t|  Press 1 to LOG      |" << endl;
            cout << "\t|______________________|" << endl;
            cout << "\t ______________________" << endl;
            cout << "\t|                      |" << endl;
            cout << "\t|  Press 2 to RETRIVE  |" << endl;
            cout << "\t|______________________|" << endl;
            cout << "\t ______________________" << endl;
            cout << "\t|                      |" << endl;
            cout << "\t|  Press 3 to SEARCH   |" << endl;
            cout << "\t|______________________|" << endl;
            cout << "\t ______________________" << endl;
            cout << "\t|                      |" << endl;
            cout << "\t|  Press 4 to UPDATE   |" << endl;
            cout << "\t|______________________|" << endl;
            cout << "\t ______________________" << endl;
            cout << "\t|                      |" << endl;
            cout << "\t|  Press 5 to DELETE   |" << endl;
            cout << "\t|______________________|" << endl;
            cout << "\t ______________________" << endl;
            cout << "\t|                      |" << endl;
            cout << "\t|  Press 6 to EXIT     |" << endl;
            cout << "\t|______________________|" << endl;
            cout << "\n\n\t Enter a Number: ";
            user = getch();
            system("cls");
            switch (user)
            {
            case '1':
                log();
                break;
            case '2':
                retrive();
                break;
            case '3':
                search();
                break;
            case '4':
                update();
                break;
            case '5':
                del();
                break;
            case '6':
                exit(0);
                break;
            default:
                cout << "\a\n\tInvalid Input";
                break;
            }
        }
    }
    else
    {
        cout << "\n\tCheck your Username and Password";
    }

    return 0;
}