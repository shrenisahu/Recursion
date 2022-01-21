
#include <bits/stdc++.h>
using namespace std;
void Permutation(string s, int left, int right)
{

    if (left == right)
    {

        cout << s << "   ";
        return;
    }
    for (int i = left; i <= right; i++)
    {

        swap(s[left], s[i]);
        Permutation(s, left + 1, right);

        swap(s[left], s[i]);//backtract
    }
}
//if n is no of character in string then no of permutations in string is n!
// n=3 hence 3!=6
int main()
{

    string s = "abc";
    int left = 0;
    int right = s.size()-1;

    Permutation(s, left, right);
    return 0;
}
