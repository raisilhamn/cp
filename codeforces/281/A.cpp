#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    str[0] = toupper(str[0]);
    cout << str << endl;
    return 0;
}
