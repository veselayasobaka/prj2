#include <iostream>   
#include <vector>
#include <ctime>
#include <algorithm>
void join(const std::vector<int> &from, std::vector< int > &to);
int main()
{
    srand(time(0));
    const int L1 = 12, L2 = 12;
    std::vector<int> a1(L1);
    for (uint32_t i = 0; i < L1; ++i)
    {
        a1[i] = (rand() % 100) - 50;
    }
    std::cout << std::endl;
    std::vector<int> a2(L2);
    for (uint32_t j = 0; j < L2; ++j)
    {
        a2[j] = (rand() % 100) - 50;
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    join (a1, a2);
    std::vector<int>::iterator it = a2.begin();
    while (it != a2.end())
    {
        std::cout << *it << ' ';
        ++it;
    }
    std::cout << std::endl << a2.size() << std::endl;
    return 0;
}
