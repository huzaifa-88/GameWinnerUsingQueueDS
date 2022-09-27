#include <iostream>
#include <queue>
using namespace std;

int gameWinner(int n, int k);

main()
{
    int n = 5;
    int k = 2;

    int winner = gameWinner(n, k);
    cout << "Winner is:" << winner << endl;
}
// Functions Implementations
int gameWinner(int n, int k)
{
    queue<int> myQueue;
    for (int i = 1; i <= n; i++)
    {
        myQueue.push(i);
    }
    int temp, win;
    while (myQueue.size() != 1)
    {
        for (int i = 1; i < k; i++)
        {
            temp = myQueue.front();
            myQueue.pop();
            myQueue.push(temp);
            // win= myQueue.front();
        }
        myQueue.pop();
    }
    return myQueue.front();
}
void a()
{
    {
    {
    {
    }
    
    
    }}
}
