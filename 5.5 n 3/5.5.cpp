#include <iostream>
using namespace std;

int maxDepth = 0;
int V0(int n, int depth) 
{
    if (depth > maxDepth) 
    {
        maxDepth = depth;
    }

    cout << "Level of recursion: " << depth << ", number of people: " << n << endl;

    if (n == 1) {
        return 1; 
    }
    else if (n % 2 == 0) {
        return 2 * V0(n / 2, depth + 1) - 1; 
    }
    else {
        return 2 * V0(n / 2, depth + 1) + 1; 
    }
}

int V1(int n) 
{
    int depth = 0;
    while (n > 1) 
    {
        n = n / 2; 
        depth++;
    }
    return depth;
}

int main() 
{
    int n;

    cout << "Enter the number of people in the circle: ";
    cin >> n;

    int last = V0(n, 1); 
    int depth = V1(n);

    cout << "The last person has a number: " << last << endl;
    cout << "Recursion depth: " << maxDepth << endl;

    return 0;
}
