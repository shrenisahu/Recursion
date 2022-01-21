#include <bits/stdc++.h>
using namespace std;

void Paranthesis(int O, int C, string output)
{

    if (O == 0 && C == 0)
    {

        cout << output << "  ";
        return;
    }
    if (O != 0)
    {
        string output1 = output;
        output1.push_back('(');

        Paranthesis(O - 1, C, output1);
    }

    if (O < C)
    {

        string output2 = output;
        output2.push_back(')');
        Paranthesis(O, C - 1, output2);
    }
}
int main()
{
    int n = 3;

    int O = n; // no of opening bracket
    int C = n; // no of closing bracket

    string output = "";
    Paranthesis(O, C, output);

    return 0;
}
