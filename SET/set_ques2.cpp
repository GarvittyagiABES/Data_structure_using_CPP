#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> attempt_ques;
    int n, p, q;
    std::cin >> n >> p >> q;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int correct = i;
            int incorrect = j;
            int unattended = n - (i + j);
            if (unattended >= 0)
            {
                int score = p * correct + q * incorrect;
                attempt_ques.insert(score);
            }
            else
            {
                break;
            }
        }
    }
    std::cout << "possible pair: " << attempt_ques.size();

    return 0;
}