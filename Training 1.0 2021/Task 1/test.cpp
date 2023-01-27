#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

string rem(string s){
    string s1, s2, s3;

    remove_copy(s.begin(), s.end(), back_inserter(s1), '(');
    remove_copy(s1.begin(), s1.end(), back_inserter(s2), ')');
    remove_copy(s2.begin(), s2.end(), back_inserter(s3), '-');

    s = s3;
    return s;
}

string delete_seven(string s){
    if(s[0] == '+'){
        s.erase(0, 2);
        s.insert(0, 1, '8');
    }
    return s;
}

string lead_to_standart(string s){
    s = rem(s);
    s = delete_seven(s);
    return s;
}

int main(){
    string found_number, number1, number2, number3;
    cin >> found_number >> number1 >> number2 >> number3;

    found_number = lead_to_standart(found_number);
    vector <string> numbers = {number1, number2, number3};
    
    for(int i = 0; i < numbers.size(); i++){
        numbers[i] = lead_to_standart(numbers[i]);

        if(numbers[i] == found_number){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}