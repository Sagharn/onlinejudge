#include <iostream>
#include <string>
using namespace std;

int countDigits(string x) 
{
    return x.length();
}

int findRepetition(string x0, int i) 
{
    string x1 = to_string(countDigits(x0));

    if (x1 == x0) {
        return i;
    }
    else 
    {
        return findRepetition(x1, i + 1);
    }
}

int main() 
{
    string x0;

    while (true) 
    {
        cin >> x0;
        if (x0 == "END") 
        {
            break;
        }

        int result = findRepetition(x0, 1);
        cout << result << endl;
    }

    return 0;
}
