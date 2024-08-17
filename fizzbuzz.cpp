#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int i);

int main()
{

    auto res = fizzBuzz(150);

    // printing
    for (const auto &i : res)
    {
        cout << i << endl;
    }

    return 0;
}

vector<string> fizzBuzz(int i)
{
    vector<string> result; //(i);

    for (int ind = 1; ind <= i; ind++)
    {
        if (ind % 3 == 0 && ind % 5 == 0)
        {
            result.push_back("fizzbuzz");
        }
        if (ind % 3 == 0)
        {
            result.push_back("fizz");
        }
        else if (ind % 5 == 0)
        {
            result.push_back("buzz");
        }
        else
        {
            result.push_back(std::to_string(ind));
        }
    }

    return result;
}
