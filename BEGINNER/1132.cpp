#include<iostream>

using namespace std;

int main(){
    int x, y, aux, i, soma = 0;
    
    cin >> x >> y;
    
    if(y < x){
        aux = x;
        x = y;
        y = aux;
    }
    
    for(i = x; i <= y; i++){
        if(i % 13 != 0) soma+= i;
    }
    
    cout << soma << endl;
    
    return(0);
}