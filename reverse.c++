
// This program will display the array in reverse in c++
#include <iostream>
#include <string>

using namespace std;

string reverse (string line){

string reversed ;
int a = line.length();
for (int i = a - 1 ; i >= 0; i--) {

    reversed.push_back(line[i]);
}

return reversed;
}

int main(){
    
string input_line;
string reversed_string;

cout << "\n\nWelcome to the reverse string" ;
cout << "\nPlease type the ßtring that you want to reverse: ";
getline(cin, input_line);

reversed_string =  reverse(input_line);

cout << "\nThe string in reversed is: "<< reversed_string << "\nThanks\n\n";

\
}