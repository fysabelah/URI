#include<iostream>

using namespace std;

int main(){
    int num, i;
    
    cin >> num;
    
    for(i = 1; i <= 10; i++){
        cout << i << " x " << num << " = " << i*num << endl;
    }
    
    return(0);
}