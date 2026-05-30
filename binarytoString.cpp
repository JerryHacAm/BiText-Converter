#include <bits/stdc++.h>
using namespace std;

void decimaltoString(int n, vector<int> sum) {
    for (int i = 0; i < n; i++) {
        char character = sum[i];
        cout << character;
    }
}

vector<int> binarytoDecimal(int n, vector<vector<int>> binary) {
    vector<int> sum(n);
    for (int i = 0; i < n; i++) {
        int m=1;
        for (int j = 0; j<8; j++) {
            int transfer = 128/m;
            m = m*2;
            sum[i] += binary[i][j] * transfer;
        }
    }
    return sum;
}

vector<vector<int>> stringtoVector(int n, string str) {
    vector<vector<int>> binary(n, vector<int>(8));
    int current_index = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<8;j++) {

            if(current_index < str.length() && !(str[current_index]=='0' || str[current_index]=='1')) {
                current_index++;
            }

            if(current_index < str.length()) {
                binary[i][j] = str[current_index] - '0';
                current_index++;
            }
            else{
                cout << "Not enough!";
                break;
            }
        }
    }
    return binary;
}

int number_of_digits(string str) {
    int count = 0;
    for (char c: str) {
        if( c == '0' || c == '1') {
            count++;
        }
    }
    return count;
}

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

int main() {

while(1) 
{
    cout << "Binary or Decimal? (Enter \"End\" to stop)" << endl << "Enter your choice: ";
    string choice;
    getline(cin,choice);

    if (choice == "Binary") {
        cout << "Binary Input: ";
    string str;
    getline(cin, str);

    int digits = number_of_digits(str);
    int n = 0;
    if(digits >= 8) {
        n = digits/8;
    }
    else {
        cout << "Please enter in the right format!" << endl << endl;
        continue;
    }
    for (int i = 0; i < str.length(); i++) {
        if(!(str[i]=='1'||str[i]=='0'||str[i]==' ')) {
            cout << "Please enter in the right format!" << endl << endl;
            continue;
        }
    }

    if(digits%8!=0) {
        cout << "Please enter in the right format!" << endl << endl;
        continue;
    }

    cout << "Numbers of characters: " << n << endl;

    vector<vector<int>> binaryVector = stringtoVector(n, str);

    for (int i=0; i<n; i++) {
        for (int j=0; j<8; j++) {
            cout << binaryVector[i][j];
        }
        cout << " ";
    }

    cout << endl;

    vector<int> decimal = binarytoDecimal(n, binaryVector);
    for (int i = 0; i< n; i++) {
        cout << decimal[i] << " ";
    }

    cout << endl << "Text: ";
    
    decimaltoString(n, decimal);

    cout << endl << endl;

    continue;
    }

    else if (choice == "Decimal")
    {
        cout << "Decimal input: ";
    string str;
    getline(cin, str);

    vector <int> decimal;
    
    istringstream user_iss(str);
    int user_number;
    while (user_iss >> user_number) {
        decimal.push_back(user_number);
    }

    for (int i = 0; i < decimal.size(); i++) {
        if (decimal[i] < 128 && decimal[i] >=0) {
            cout << "Text: ";
            decimaltoString(decimal.size(), decimal);
            cout << endl << endl;
            break;
        }
        else {
            cout << "Please enter numbers from 0 to 127!" << endl << endl;
            break;
        }
    }
    continue;
    }
    
    else if (choice == "End") {
        return 0;
    }

    else {
        cout << "Please enter either Binary or Decimal!" << endl << endl;
        continue;
    }
    
}

    return 0;
}