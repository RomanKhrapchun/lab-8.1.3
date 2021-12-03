#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* s, const char c)
{
    int k = 0,
        pos = 0;
    char* t;
    while (t = strchr(s + pos, c))
    {
        pos = t - s + 1;
        k++;
    }
    return k;
}

void Change(char* s)
{
    char c{};
    int i = 0;

    while (Count(s, c))
    {
         if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c' && s[i + 1] != '\0' && s[i + 2] != '\0')
         {
                s[i] = '\0';
                strcat(s, "**");
                strcat(s, s + i + 3);
         }
         i++;
    }
}

int main()
{
    char c{};

    cout << "Enter string:" << endl;

    char* s = new char[101];
    cin.getline(s, 100);

    cout << endl;

    if (Count(s, c))
        cout << "String contained " << Count(s, c) << " groups of abc" << endl;

    cout << endl;

    Change(s);

    cout << s << endl;
}