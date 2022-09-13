#include <bits/stdc++.h>
using namespace std;
int main()
{
    long prof_word, no_of_words;
    cin >> prof_word >> no_of_words;
    string arr_word[no_of_words][2];
    for (int i = 0; i < no_of_words; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> arr_word[i][j];
    }
    string arr_of_prof[prof_word];
    for (int i = 0; i < prof_word; i++)
        cin >> arr_of_prof[i];
    int whichRow[prof_word];
    for (int i = 0; i < prof_word; i++)
    {
        for (int j = 0; j < no_of_words; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (arr_of_prof[i] == arr_word[j][k])
                    whichRow[i] = j;
            }
        }
    }
    for (int i = 0; i < prof_word; i++)
    {
        int x = whichRow[i];
        for (int j = 0; j < 1; j++)
        {
            if (arr_word[x][j].size() == arr_word[x][j + 1].size())
            {
                cout << arr_word[x][j] << " ";
                break;
            }
            else if (arr_word[x][j].size() > arr_word[x][j + 1].size())
            {
                cout << arr_word[x][j + 1] << " ";
                break;
            }
            else if (arr_word[x][j].size() < arr_word[x][j + 1].size())
            {
                cout << arr_word[x][j] << " ";
                break;
            }
        }
    }
    return 0;
}

 