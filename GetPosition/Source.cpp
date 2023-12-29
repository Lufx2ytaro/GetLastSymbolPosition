#include <iostream>
using namespace std;

int getSymbolPosition(const string& text, int index) 
{
    if (index < 0) 
    {
        return -1; 
    }
    if (text[index] == 'а') 
    {
        return index; 
    }
    return getSymbolPosition(text, index - 1); 
}

int main() 
{
    string text = "ќблако";
    cout << getSymbolPosition(text, text.length() - 1) << endl;
    return 0;
}