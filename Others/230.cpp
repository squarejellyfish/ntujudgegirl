#include <iostream>
#include <vector>
#include <utility>
#include <set>

std::vector< std::pair<int, int> > items;
std::vector<int> ans;

void search_solution(std::vector< std::pair<int, int> > curr_items, int value, int W) {
    // std::cout << "searching " << value << " " << W << "\n";
    if (curr_items.size() == 0) {
        ans.push_back(value);
        return;
    }
    if (W == 0) {
        ans.push_back(value);
        return;
    }

    std::vector< std::pair<int, int> > next_items; 
    int i = 1;
    std::vector< std::pair<int, int> >::iterator it;
    for (it = curr_items.begin(); it != curr_items.end(); it++) {
        next_items = curr_items;
        next_items.erase(next_items.begin(), next_items.begin() + i);
        int next_val = value + it->second;
        int next_W = W - it->first;
        if (next_W < 0) {
            ans.push_back(value);
            i++;
            continue;
        }
        search_solution(next_items, next_val, next_W);
        i++;
    }

    return;
}

int main (int argc, char *argv[]) {
    int n, W;
    std::cin >> n >> W;

    for (int i = 0; i < n; i++) {
        std::pair<int, int> curr;
        std::cin >> curr.first >> curr.second;
        items.push_back(curr);
    }

    search_solution(items, 0, W);
    int max = -1;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] > max) max = ans[i] ;
        // std::cout << ans[i] << " \n"[i == ans.size() - 1];
    }
    std::cout << max << "\n";

    return 0;
}
