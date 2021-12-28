#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
    do{
            if(t != 0){
	    int n;
       cin>>n;
       int sum = 0;
	   while(n>0){
	       sum = sum + n%10;
	       n = n/10;

	   }
	    cout<<sum<<endl;

            }
    } while(t--);
	return 0;
}

