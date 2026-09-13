#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    vector<int> A;
    A.push_back(10);
    A.push_back(50);
    A.push_back(80);
    A.push_back(0);

    // Insert
    A.push_back(1);                 // push 1 at last
    A.insert(A.begin(), 7);         // Insert 7 at first
    A.insert(A.begin() + 2, 10);    // Insert 10 in index 2

    // Change Val
    A[4] = -5;

    // Show the size
    cout << A.size() << endl;

    // Delete
    A.pop_back();                   // pop in vector
    A.erase(A.begin() + 3);         // Delete in index 3
    A.clear();                      // Delete all

    return 0;
}
