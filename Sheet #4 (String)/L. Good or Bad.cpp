#include <iostream>
using namespace std;
// Driver code
int main()
{
    long t;
    cin >> t;
    //  long counter=0;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int count = 0;
        for (int i = 0; i < n - 2;)
        {

            // If "010" matches the sub-string
            // starting at current index i
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                count++;
                i += 3;
            }

            // If "101" matches the sub-string
            // starting at current index i
            else if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                count++;
                i += 3;
            }
            else
            {
                i++;
            }
        }
        if (count >= 1)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
        count = 0;
    }
    return 0;
}