#include <iostream>
#include <string.h>
using namespace std;

void pachecker(string& input) 
{ 
    int n = input.length(); 
    bool hasLower = false, hasUpper = false ,hasDigit = false, specialChar = false; 
    string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "; 
  
    for (int i = 0; i < n; i++) 
    { 
        if (islower(input[i])) 
            hasLower = true; 
        if (isupper(input[i])) 
            hasUpper = true; 
        if (isdigit(input[i])) 
            hasDigit = true; 
  
        size_t special = input.find_first_not_of(normalChars); 
        if (special != string::npos) 
            specialChar = true; 
    } 
    if(hasLower==false)
    cout<<"No lowercase Letters"<<endl;
    if(hasUpper==false)
    cout<<"No uppercase letters"<<endl;
    if(hasDigit==false)
    cout<<"No digit found"<<endl;
    if(specialChar==false)
    cout<<"No Special Character found"<<endl;
    if(n<=8)
    cout<<"password is too short"<<endl;
    if (hasLower && hasUpper && hasDigit && specialChar && (n >= 8)) 
        cout << "Valid password" << endl;
    else
        cout << "Invalid password" << endl; 
} 
  
int main()
{
    string password;
    cout<<"Enter a password";
    cin>>password;
    pachecker(password);
    return 0;
}
