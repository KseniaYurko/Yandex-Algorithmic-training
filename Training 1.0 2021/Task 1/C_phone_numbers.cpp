#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

string lead_to_standart(string s){
    string number = "";
    for(const auto x: s){
        if(x != '+' && x != '-' && x != '(' && x != ')'){
            number.push_back(x);
        }
    }
    // cout << number << endl;

    if(number.size() == 11){
        number.erase(0, 1);
    }
    if(number.size() == 7){
        number = "495" + number;
    }
    return number;
}

int main(){
    string found_number, number1, number2, number3;
    cin >> found_number >> number1 >> number2 >> number3;
    // string found_number = "8(495)430-23-97";
    // string number1 = "+7-4-9-5-43-023-97";
    // string number2 = "4-3-0-2-3-9-7";
    // string number3 = "8-495-430";

    found_number = lead_to_standart(found_number);
    // cout << found_number << endl;

    vector <string> numbers = {number1, number2, number3};
    
    for(int i = 0; i < numbers.size(); i++){
        numbers[i] = lead_to_standart(numbers[i]);

        // cout << numbers[i] << endl;

        if(numbers[i] == found_number){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}