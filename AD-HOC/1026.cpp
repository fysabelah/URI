#include<iostream>

using namespace std;

int main(){
    unsigned int n1, n2;
    
    while(cin >> n1 >> n2)
        cout << (n1 ^ n2) << "\n";
    
    return(0);
}