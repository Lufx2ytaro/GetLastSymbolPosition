#include <iostream>
using namespace std;

int getSymbolPosition(const string& text, int index) 
{
    if (index < 0) 
    {
        return -1; 
    }
    if (text[index] == '�') 
    {
        return index; 
    }
    return getSymbolPosition(text, index - 1); 
}

int main() 
{
    string text = "������";
    cout << getSymbolPosition(text, text.length() - 1) << endl;
    return 0;
}