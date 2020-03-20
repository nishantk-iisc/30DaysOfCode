#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {   
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string str1;
        cin >> str1;
        for(int j=0; j<str1.length(); j++){
            if(j%2==0){
                cout<<str1[j];
            }
        }
        cout<< " ";
        for(int j=0; j<str1.length(); j++){
            if(j%2!=0){
                cout<<str1[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
