#include <iostream>

using namespace  std;

int main()
{
    string j , s;
    cin >> s >> j;
    int sl = s.length();
    int jl = j.length();
    int ans = 0;
    bool a = false;
    for (int i = 0; i < sl; i++)
    {
        a = false;
        for (int g = 0; g < jl; g++)
        {
            if (s[i] == j[g])
            {
                for (int q = 0; q < i; q++)
                    if (s[i] == s[q])
                         a = true;
                if (a == false)
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
