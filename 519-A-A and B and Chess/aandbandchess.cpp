#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int W=0,B=0;
    char str[8][8];

    for (int i=0; i<8; i++)
        cin >> str[i];

    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            if (islower(str[i][j]))
            {
                if (str[i][j] == 'q')
                    B += 9;
                else if (str[i][j] == 'r')
                    B += 5;
                else if (str[i][j] == 'b' || str[i][j] == 'n')
                    B += 3;
                else if (str[i][j] == 'p')
                    B += 1;
            }
            else
            {
                if (str[i][j] == 'Q')
                    W += 9;
                else if (str[i][j] == 'R')
                    W += 5;
                else if (str[i][j] == 'B' || str[i][j] == 'N')
                    W += 3;
                else if (str[i][j] == 'P')
                    W += 1;
            }
        }
    }

    if (W > B)
        cout << "White\n";
    else if (W < B)
        cout << "Black\n";
    else
        cout << "Draw\n";

    return 0;
}
