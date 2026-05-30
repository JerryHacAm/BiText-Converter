#include <bits/stdc++.h>
using namespace std;

bool check_digits(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) == false)
        {
            return false;
        }
    }
    return true;
}

void stringtoDecimal(string str) {
    for (int i=0; i< str.length(); i++) {
        int n = str[i];
        cout << n << " ";
    }
    cout << endl;
}

void stringtoBinary(string str)
{
    for (int i = 0; i < str.length(); i++) {
    char n = str[i];
    if (n<256 && n>=0) {
    // cout << n << ": ";
       if (n == 0)
    {
        cout << "00000000";
        return;
    }
    int i = 0;
    int binary[8];
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int k = 8 - i; k > 0; k--)
    {
        cout << "0";
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    }
    cout << " ";
    }
}

void decimaltoBinary(int n)
{
    if (n<256 && n>=0) {
    // cout << n << ": ";
       if (n == 0)
    {
        cout << "00000000";
        return;
    }
    int i = 0;
    int binary[8];
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int k = 8 - i; k > 0; k--)
    {
        cout << "0";
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    }
    cout << " ";
}

int main() {
while (1) {
    cout << "Enter a string (Enter \"End\" to stop): ";
    string str;
    getline(cin, str);

    if (str == "End") {
        return 0;
    }

    for (int i = 0; i< str.length(); i++) {
    //cout << str[i] << endl;}
    if (check_digits(str)==false) {
    stringtoDecimal(str);
    stringtoBinary(str);
    cout << endl;
    break;
    }
    else {
        for (int i = 0; i < str.length(); i++) {
        int n = str[i] - '0';
        decimaltoBinary(n);
        }
        cout << endl;
        break;
    }
    }
    cout << endl;
    continue;
    }

    return 0;
}