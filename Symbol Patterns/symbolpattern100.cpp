#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, x = 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            if(i != n/2 + 1) 
                cout << "* ";
            else
                cout << char(64 + j) << " ";
        }
        if(i <= n/2)
            x++;
        else
            x--;
        cout << endl;
    }
    return 0;
}
