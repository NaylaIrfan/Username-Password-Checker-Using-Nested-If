#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    if (username == "NAYLA")
    {
        cout << "Enter password: ";
        cin >> password;

        if (password == "12345")
        {
            cout << "Login Successful!" << endl;
        }
        else
        {
            cout << "Incorrect Password!" << endl;
        }
    }
    else
    {
        cout << "Incorrect Username!" << endl;
    }

    return 0;
}
