#include<iostream>

using namespace std;

int main(){
    int i = 1, j = 7;
    
   do{
        cout << "I=" << i << " J=" << j << endl;
        j--;
        
        if(j-i < 4){
            i+=2;
            j+=5;
        }
    }while(i!=11);
    
    return(0);
}