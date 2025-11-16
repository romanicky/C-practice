#include <iostream>
using namespace std;

int main()
{
    const char *str1 = "Hello, world";             // Standard C-style string
    const char *str2 = "";                         // empty string
    const char *str3 = "Line1\nLine2";             // escapse characters
    const wchar_t *wstr = L"Wide Text";            // wide string
    const char *raw = R"(C:\Program Files\MyApp)"; // raw string literal
    cout << "str1: " << str1 << endl;
    cout << "str2 (empty): '" << str2 << "'" << endl;
    cout << "str3 with newline:\n"
         << str3 << endl;
    cout << "Wide string: " << wstr << endl;
    cout << "Raw string: " << raw << endl;
    return 0;
}