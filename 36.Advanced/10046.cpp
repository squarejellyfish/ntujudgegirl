#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using std::string;

int n;
string C = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
std::set<string> ans;
std::vector< std::pair<char, int> > rules;

void search_next(string curr, string cons, int pos)
{
    // std::cout << "searching: curr=" << curr << " cons=" << cons
    //           << " pos=" << pos << "\n";
    if (curr.length() == n)
    {
        ans.insert(curr);
        return;
    }

    for (int i = 0; i < cons.length(); i++)
    {
        if (std::find(rules.begin(), rules.end(),
                      std::make_pair(cons[i], pos + 1)) != rules.end())
        {
            continue;
        }
        string next = curr + cons[i];
        string next_cons = cons;
        next_cons.erase(i, 1);
        search_next(next, next_cons, pos + 1);
    }

    return;
}

int main(int argc, char *argv[])
{
    int m;
    while (std::cin >> n >> m)
    {
        string c = C.substr(0, n);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            std::cin >> x >> y;
            rules.push_back(std::make_pair(C[x - 1], y));
        }
        search_next("", c, 0);
        std::set<string>::iterator it;
        for (it = ans.begin(); it != ans.end(); it++)
        {
            std::cout << *it << "\n";
        }
        ans.clear();
        rules.clear();
    }

    return 0;
}
