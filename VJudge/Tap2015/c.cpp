#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::cout.tie(0);
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    int n, s, j, d;
    std::string l;
    while(std::cin >> n >> s >> j >> d){
        std::cin >> l;

        int ca = 0, cb = 0, sa = 0, sb = 0;

        for (char c : l)
        {
            if (c == 'A')
            {
                ca++;
            }
            else
            {
                cb++;
            }

            if ((ca >= j) && (ca - cb >= d))
            {
                sa++;
                ca = 0;
                cb = 0;
            }
            else if (cb >= j && cb - ca == d)
            {
                sb++;
                ca = 0;
                cb = 0;
            }
        }

        if (sa <= s && sb <= s)
        {
            std::cout << sa << " " << sb << '\n';
        }
        else if (sa > s)
        {
            std::cout << s << " " << sb << '\n';
        }
        else
        {
            std::cout << sa << " " << s << '\n';
        }
    }

    return 0;
}