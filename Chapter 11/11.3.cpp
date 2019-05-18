#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> getNumber() {
   const int digits = 7;
   string line;

   cout << "Enter a " << digits <<"-digit number using the digits 0-9 only: ";
   cin << line;
   while( line.size() != digits || line.find_first_not_of( "0123456789" ) != string::npos )
   {
      cout << "Invalid number; try again: ";
      cin << line;
   }

   vector<int> digits( digits );
   for ( int i = 0; i < digits; i++ ) digits[i] = line[i] - '0';
   return digits;
}

int main() {
   vector<string> kBoard = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
   vector<int> digits = getNumber();
   vector<string> wordlist(1,"");
   vector<string> temp;

   for ( int i : digits )
   {
      for ( string s : wordlist )
      {
         for ( char c : kBoard[i] ) temp.push_back( s + c );
      }
   }
 for ( string s : wordlist ) out << s << endl;
    cout << out << endl;
}