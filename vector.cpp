#include <iostream>
#include <vector>
using namespace std; 

int main ()
{

vector<int> arr={1,2,3,4,10};
arr.push_back(16);

cout <<arr.size()<<endl;
cout <<arr.capacity() << endl;

return 0;
}
