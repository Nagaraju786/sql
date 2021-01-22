#include <iostream>

using namespace std;

bool checkPalin(string str)
{
    int len = str.length();
    int flag = 0;

  
    for(int i = 0; i < len/2; ++i)
    {
        if( tolower(str[i]) != tolower(str[len - i - 1]) )
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string instr;
    
    while(1)
    {
        cout << "Enter String " << endl;
        getline(cin, instr);
        
        bool res = checkPalin(instr);
        if(res)
            cout << instr << " is Palindrome" << endl;
        else
            cout << instr << " is Not Palindrome" << endl;
    }
    

    return 0;
}

