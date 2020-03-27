#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rem=0, max=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0){
        if(n%2 == 1){
            rem++;
            if(rem > max) max = rem;
        }else rem = 0;
        n = n/2;
    }
    cout << max; 
    return 0;
}
