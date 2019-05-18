#include <iostream>
#include<string.h>

using namespace std;

int Is_Palindrome(char str[]);

int main(){
char input_string[20];
  
int point = 0;
  
cout << "Enter an input string: ";
cin >> input_string;
  
point = Is_Palindrome(input_string);
  
if (point) {
cout << input_string << " is not a palindrome" << endl;
}

else {
cout << input_string << " is a palindrome" << endl;
}

return 0;
}
int Is_Palindrome(char str[]){
int i;
int point = 0;
int length = strlength(str);

for(int i = 0; i < strlength(str); i++)
str[i] = toupper(str[i]);
for(i=0;i < length ;i++){
if(str[i] != str[length-i-1]){
point = 1;
break;
}
}
return point;
}