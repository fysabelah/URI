#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a >> b;
	
	if(a > b){
	    if(a%b == 0) cout << "Sao Multiplos" << endl;
	    else cout << "Nao sao Multiplos" << endl;
	}
	else{
	    if(b%a == 0) cout << "Sao Multiplos" << endl;
	    else cout << "Nao sao Multiplos" << endl;
	}
	
	return(0);
}