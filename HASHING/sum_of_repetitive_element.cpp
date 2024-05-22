#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int n;
    std::cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int ele;
        std::cin >> ele;
        input.push_back(ele);
    }
    
    std::cout << endl;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    { // storing frequencies in map
        freq[input[i]]++;
    }
    int sum=0;
    //  finding sum of repestitive element
    for (auto pair :freq)

    {
        if(pair.second>1)
        {
            sum+=pair.first;
        }
    }
    std::cout<<"Sum is: "<<sum;



    return 0;
}